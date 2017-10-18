/*
 * Automatically Generated from Mathematica.
 * Tue 17 Oct 2017 12:28:00 GMT-04:00
 */

#ifndef MMAT_CASSIE_HH
#define MMAT_CASSIE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymFunction
{

  void Mmat_cassie_raw(double *p_output1, const double *var1);

  inline void Mmat_cassie(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 22, 22);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Mmat_cassie_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // MMAT_CASSIE_HH
