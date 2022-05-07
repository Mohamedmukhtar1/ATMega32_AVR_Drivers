/*
 * MCAL_ADC_CFG.h
 *
 * Created: 2022-05-06 08:54:30 PM
 *  Author: Eng- Mohamed Mokhtar
 */ 

#ifndef MCAL_ADC_CFG_H_
#define MCAL_ADC_CFG_H_

/***************_Macros_Configuration_*********************/

/*============================================================================
  ==================_Supported Voltage Reference by ADC_======================
  ============================================================================
				_OPTIONS_1_-> [AREF_PIN]						// note:!!!!
				_OPTIONS_2_-> [AVCC_PIN]						// note: Tested and verified
				_OPTIONS_3_-> [_2_56_INTERNAL_VOLT_]			// note:!!!!
  ============================================================================*/
/*==================_Supported Result Adjustment Options by ADC_==============
  ============================================================================
			_OPTIONS_1_->  [RIGHT_RESULT_ADJUST]
			_OPTIONS_2_->  [LEFT_RESULT_ADJUST]				                  */
#define RESULT_ADJUST		RIGHT_RESULT_ADJUST
/*============================================================================*/
/*==================_Supported Prescaler Options by ADC_======================
  ============================================================================
			_OPTIONS_1_->  [PRESCALER_DIV_FACTOR_2_]
			_OPTIONS_2_->  [PRESCALER_DIV_FACTOR_4_]
			_OPTIONS_3_->  [PRESCALER_DIV_FACTOR_8_]
			_OPTIONS_4_->  [PRESCALER_DIV_FACTOR_16_]
			_OPTIONS_5_->  [PRESCALER_DIV_FACTOR_32_]
			_OPTIONS_6_->  [PRESCALER_DIV_FACTOR_64_]
			_OPTIONS_7_->  [PRESCALER_DIV_FACTOR_128_]					      */
#define ADC_PRESCALER		PRESCALER_DIV_FACTOR_128_
/*============================================================================*/



#endif /* MCAL_ADC_CFG_H_ */