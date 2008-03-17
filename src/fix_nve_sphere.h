/* ----------------------------------------------------------------------
   LAMMPS - Large-scale Atomic/Molecular Massively Parallel Simulator
   http://lammps.sandia.gov, Sandia National Laboratories
   Steve Plimpton, sjplimp@sandia.gov

   Copyright (2003) Sandia Corporation.  Under the terms of Contract
   DE-AC04-94AL85000 with Sandia Corporation, the U.S. Government retains
   certain rights in this software.  This software is distributed under 
   the GNU General Public License.

   See the README file in the top-level LAMMPS directory.
------------------------------------------------------------------------- */

#ifndef FIX_NVE_SPHERE_H
#define FIX_NVE_SPHERE_H

#include "fix.h"

namespace LAMMPS_NS {

class FixNVESphere : public Fix {
 public:
  FixNVESphere(class LAMMPS *, int, char **);
  ~FixNVESphere();
  int setmask();
  void init();
  void initial_integrate(int);
  void final_integrate();
  void initial_integrate_respa(int, int, int);
  void final_integrate_respa(int);
  void reset_dt();

 private:
  int extra;
  double dtv,dtf,dtfrotate;
  double *step_respa;
  double *dttype;
};

}

#endif
