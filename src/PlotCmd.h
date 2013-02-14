////////////////////////////////////////////////////////////////////////////////
//
// PlotCmd.h:
//
////////////////////////////////////////////////////////////////////////////////
// $Id: PlotCmd.h,v 1.1 2009-06-29 09:59:41 fgygi Exp $

#ifndef PLOTCMD_H
#define PLOTCMD_H

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

#include "UserInterface.h"
#include "Sample.h"

class PlotCmd : public Cmd
{
  public:

  Sample *s;

  PlotCmd(Sample *sample) : s(sample) {};

  char *name(void) const { return "plot"; }

  char *help_msg(void) const
  {
    return
    "\n plot\n\n"
    " syntax: plot filename\n"
    "         plot -density filename\n"
    "         plot -wf <n> filename\n"
    "         plot -wf <nmin> <nmax> filename\n\n"
    "   The plot command creates a plot file in xyz or cube format.\n\n"
    "   The default format is xyz, used for plotting atoms only.\n"
    "   When using the -density option, the charge density is written\n"
    "   after the atomic positions.\n\n";
  }

  int action(int argc, char **argv);
};
#endif