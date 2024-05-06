#include "stdint.h"

#define MATH_SINE_LUT_LENGTH_BITS 6u                                        /**< bit size of the sine lookup table */
#define MATH_SINE_LUT_LENGTH      ((uint16_t) 1 << MATH_SINE_LUT_LENGTH_BITS )   /**< length of the sine lookup table */
#define MATH_SINE_LUT_IDX_MSK     ( 0x3F )                                  /**< bit mask for the sine lookup table */

extern const int16_t math_svm_value_LUT[ MATH_SINE_LUT_LENGTH ];

static inline int16_t math_svm_waveform_unsafe ( uint16_t alpha );


/**
 * @brief compute SVM(alpha)
 * @details compute space vector modulation waveform from a combination of LUT and interpolation<br>
 * @param alpha represents the angle with 0x0000 being 0 degrees and MATH_ANGLE_MAX being 360 degrees
 * @return (i.e. return value) is S16_MIN ... S16_MAX
 */
static inline int16_t math_svm_waveform_unsafe ( uint16_t alpha )
{
    return math_svm_value_LUT[ alpha ];
}