;************************************************************************
; Filename: Lab4.ASM                                                    *
;                                                                       *
; ELEC3450 - Microprocessors                                            *
; Wentworth Institute of Technology                                     *
; Professor Bruce Decker                                                *
;                                                                       *
; Student #1 Name: Shane McNamara                                       *
; Student #2 Name: Dhruv Patel                                          *
;                                                                       *
; Course Section: < 03 >                                                *
; Date of Lab: 06-22-2016                                               *
; Semester: Summer 2016                                                 *
;                                                                       *
; Function:Analog to Digital Converter                                  *
; Wiring:                                                               *
; Ain => RA0 max 5V                                                     *
; RC0-RC7 => LED1-LED8                                                  *
;                                                                       *
;************************************************************************
 
 
               #include <p16f877a.inc>
 
TEMPW                               EQU                      0X20
TEMP_STATUS       EQU                  0X21
 
               __CONFIG 0X373A
 
               ORG 0X0000
               GOTO START
              
              
               ORG 0X0004
PUSH;Store status and W register during ISR
               MOVWF TEMPW
               SWAPF STATUS,W
               MOVWF TEMP_STATUS
               BTFSC PIR1,ADIF       ;test if conversion was finsihed
               GOTO ADISR
 
POP; retrieve status and w reg for normal operation
               SWAPF TEMP_STATUS,W
               MOVWF STATUS
               SWAPF TEMPW,F
               SWAPF TEMPW,W
               RETFIE
 
ADISR
               BCF PIR1,ADIF
               CLRF PORTC
               MOVF ADRESH,W
               MOVWF PORTC    ;Move output digital value to portc
               CLRF ADRESH
               CLRF ADIF
               GOTO POP    
 
START
               BCF STATUS,RP0     ;Shift to bank 0
 
               MOVLW 0xC5
               MOVWF ADCON0      
              
               BSF INTCON,PEIE    ;Enable peripheral interupts
 
               BSF STATUS,RP0     ;Shift to bank 1
              
               MOVLW 0XFF
               MOVWF TRISA        ;PortA all input
 
              
    
               MOVLW 0X00
               MOVWF TRISC      ;PORTC all output
               
   
               MOVLW 0X40
               MOVWF PIE1       ;turn on A/D interupts
   
               BCF STATUS,RP0   ;Shift to bank 0
   
               BSF INTCON,GIE   ;Enable global interupts
                                           
            CONSTART
               BSF ADCON0,GO          ;Start Conversion
               waitADC BTFSC ADCON0,NOT_DONE
                     goto waitADC
              goto CONSTART
 
 
               END