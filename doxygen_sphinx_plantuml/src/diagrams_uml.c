/**
 * Background handler, to be called from main loop
 *
 * \startuml
 *   Start
 *   :Compensate FOC;
 *   :Compensate R-coil;
 *   Stop
 * \enduml
 *
 * Resistance in function of the temperature
 * ```math
 * R = R0 * (1 + alpha * (T - T0))
 * ```
 * R0 the resistance at reference temperature T0
 *
 * @param a_u16ChipTemperature [RAW-ADC] chip temperature
 */
void foc_Handler(unsigned int Temperature)
{
    /*
     * Calculate FOC
     */


    /*
     * Compensate R over temperature
     * R(t) = R(ref) * (1 + alpha * (t - t(ref))
     */
}