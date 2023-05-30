#include "math_utils.h"
/**
   \var math_svm_value_LUT
   \brief lookup table for SVM waveform
 */
const int16_t math_svm_value_LUT[ MATH_SINE_LUT_LENGTH ] =
{
  0, 4817, 9588, 14267, 18809, 23169, 25450, 26558, 27410, 27998, 28316, 28361,
  28134, 27635, 26871, 25847, 24575, 25847, 26871, 27635, 28134, 28361, 28316,
  27998, 27410, 26558, 25450, 23169, 18809, 14267, 9588, 4817, 0, -4817, -9588,
  -14267, -18809, -23169, -25450, -26558, -27410, -27998, -28316, -28361, -28134,
  -27635, -26871, -25847, -24575, -25847, -26871, -27635, -28134, -28361, -28316,
  -27998, -27410, -26558, -25450, -23169, -18809, -14267, -9588, -4817
};

// /**
//  * @brief compute SVM(alpha)
//  * @details compute space vector modulation waveform from a combination of LUT and interpolation<br>
//  * @param alpha represents the angle with 0x0000 being 0 degrees and MATH_ANGLE_MAX being 360 degrees
//  * @return (i.e. return value) is S16_MIN ... S16_MAX
//  */
// int16_t math_svm_waveform_unsafe ( uint16_t alpha )
// {

//     return math_svm_value_LUT[ alpha ];
// }