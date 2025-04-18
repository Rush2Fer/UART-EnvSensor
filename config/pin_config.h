#ifndef PIN_CONFIG_H
#define PIN_CONFIG_H

// $[CMU]
// CMU CLKIN0 on PC00
#ifndef CMU_CLKIN0_PORT                         
#define CMU_CLKIN0_PORT                          SL_GPIO_PORT_C
#endif
#ifndef CMU_CLKIN0_PIN                          
#define CMU_CLKIN0_PIN                           0
#endif

// [CMU]$

// $[LFXO]
// [LFXO]$

// $[PRS.ASYNCH0]
// [PRS.ASYNCH0]$

// $[PRS.ASYNCH1]
// [PRS.ASYNCH1]$

// $[PRS.ASYNCH2]
// [PRS.ASYNCH2]$

// $[PRS.ASYNCH3]
// [PRS.ASYNCH3]$

// $[PRS.ASYNCH4]
// [PRS.ASYNCH4]$

// $[PRS.ASYNCH5]
// [PRS.ASYNCH5]$

// $[PRS.ASYNCH6]
// [PRS.ASYNCH6]$

// $[PRS.ASYNCH7]
// [PRS.ASYNCH7]$

// $[PRS.ASYNCH8]
// [PRS.ASYNCH8]$

// $[PRS.ASYNCH9]
// [PRS.ASYNCH9]$

// $[PRS.ASYNCH10]
// [PRS.ASYNCH10]$

// $[PRS.ASYNCH11]
// [PRS.ASYNCH11]$

// $[PRS.SYNCH0]
// [PRS.SYNCH0]$

// $[PRS.SYNCH1]
// [PRS.SYNCH1]$

// $[PRS.SYNCH2]
// [PRS.SYNCH2]$

// $[PRS.SYNCH3]
// [PRS.SYNCH3]$

// $[GPIO]
// GPIO SWV on PA03
#ifndef GPIO_SWV_PORT                           
#define GPIO_SWV_PORT                            SL_GPIO_PORT_A
#endif
#ifndef GPIO_SWV_PIN                            
#define GPIO_SWV_PIN                             3
#endif

// [GPIO]$

// $[TIMER0]
// [TIMER0]$

// $[TIMER1]
// [TIMER1]$

// $[TIMER2]
// [TIMER2]$

// $[TIMER3]
// [TIMER3]$

// $[TIMER4]
// [TIMER4]$

// $[USART0]
// [USART0]$

// $[USART1]
// USART1 RX on PA06
#ifndef USART1_RX_PORT                          
#define USART1_RX_PORT                           SL_GPIO_PORT_A
#endif
#ifndef USART1_RX_PIN                           
#define USART1_RX_PIN                            6
#endif

// USART1 TX on PA05
#ifndef USART1_TX_PORT                          
#define USART1_TX_PORT                           SL_GPIO_PORT_A
#endif
#ifndef USART1_TX_PIN                           
#define USART1_TX_PIN                            5
#endif

// [USART1]$

// $[I2C1]
// I2C1 SCL on PD03
#ifndef I2C1_SCL_PORT                           
#define I2C1_SCL_PORT                            SL_GPIO_PORT_D
#endif
#ifndef I2C1_SCL_PIN                            
#define I2C1_SCL_PIN                             3
#endif

// I2C1 SDA on PD02
#ifndef I2C1_SDA_PORT                           
#define I2C1_SDA_PORT                            SL_GPIO_PORT_D
#endif
#ifndef I2C1_SDA_PIN                            
#define I2C1_SDA_PIN                             2
#endif

// [I2C1]$

// $[PDM]
// [PDM]$

// $[LETIMER0]
// [LETIMER0]$

// $[IADC0]
// [IADC0]$

// $[I2C0]
// [I2C0]$

// $[EUART0]
// [EUART0]$

// $[PTI]
// [PTI]$

// $[MODEM]
// [MODEM]$

// $[CUSTOM_PIN_NAME]
#ifndef _PORT                                   
#define _PORT                                    SL_GPIO_PORT_A
#endif
#ifndef _PIN                                    
#define _PIN                                     0
#endif

// [CUSTOM_PIN_NAME]$

#endif // PIN_CONFIG_H

