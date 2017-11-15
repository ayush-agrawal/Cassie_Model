/*
 * Automatically Generated from Mathematica.
 * Wed 15 Nov 2017 08:31:39 GMT-05:00
 */

#ifndef J_BASEROTZ_MEX_HH
#define J_BASEROTZ_MEX_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void J_BaseRotZ_mex_raw(double *p_output1, const double *var1);

  inline void J_BaseRotZ_mex(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 20, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 3, 20);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_BaseRotZ_mex_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_BASEROTZ_MEX_HH
