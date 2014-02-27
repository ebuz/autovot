/*
 *  KernelExpansion.h
 *  pa_primal
 *
 *  Created by Joseph Keshet on 28/8/09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */

#include <string>
#include <infra.h>

class KernelExpansion 
{
public:
  KernelExpansion(std::string _kernel_name, int _d, double _sigma = 1.0);
  int features_dim();
  infra::vector_view expand(infra::vector_base x);
  bool is_linear_kernel() { return (kernel_name == ""); }

private: 
  std::string kernel_name;
  int d;
  double sigma;
};