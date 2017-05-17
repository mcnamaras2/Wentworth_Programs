;************************************************************************
; Filename: GENERAL.H													*
; Function: Defines and Macros for PIC68F84A programming.				*
;       Any special should be put in another header file like			*
;		this format.													*
; Autohr: Steve C. Hsiung												*
; Date: 6-03-2010														*
;************************************************************************

;===================== Destination Designator Equates =========================
W             	EQU   	0    	;W Register Designation
w            	EQU    	0
F             	EQU    	1    	;F Register Designation
f             	EQU    	1
MSB           	EQU    	7    	;Most Significant Bit position   
LSB           	EQU    	0    	;Least Significant Bit position

;============================ UC01 Memory Map =================================
INDF          	EQU    	0X00 	;Indirect File Register
TMR0          	EQU    	0X01 	;Real-Time Clock/Counter
PCL            	EQU    	0X02 	;Program Counter
STATUS        	EQU    	0X03 	;Status Register
FSR           	EQU    	0X04 	;File Select Register
PORTA        	EQU    	0X05 	;I/O Port A
PORTB        	EQU    	0X06 	;I/O Port B
PCLATH			EQU		0X0A	;PC High Byte
INTCON			EQU		0X0B	;Interrupt Control Register
OPTION_REG		EQU		0X81	;Option Register
TRISA			EQU		0X85	;TRISA Control Register
TRISB			EQU		0X86	;TRISB Control Register


;================================ STATUS Bits =================================
C             	EQU   	0X0  	;Carry Flag
DC            	EQU    	0X1  	;Digit Carry Flag
Z             	EQU    	0X2  	;Zero Flag
PD	        	EQU    	0X3  	;Power Down Bit
TO	        	EQU    	0X4  	;Watch Dog Time out Bit
RP0           	EQU    	0X5  	;Bank Select
RP1           	EQU    	0X6  	;Bank Select, Unused
IRP           	EQU    	0X7  	;Unused

;================================ OPTION Bits =================================
PS0           	EQU    	0X0  	;Watchdog Timer Prescaler Rate
PS1           	EQU    	0X1
PS2           	EQU    	0X2
PSA          	EQU    	0X3  	;Prescaler Assign to WDT or Timer0
TOSE           	EQU    	0X4  	;Timer0 Source Edge Select
TOCS           	EQU    	0X5		;Timer0 Source Select
INTEDG         	EQU    	0X6 	;Interrupt Edge Select
RBPU          	EQU    	0X7  	;Port B Pull Up Enable

;============================== INTCON Bits =================================
RBIF        	EQU    	0X0  	;Port B INT Flag
INTF         	EQU    	0X1  	;Ext INT Flag
TOIF         	EQU    	0X2  	;Timer0 Overflow INT Flag
RBIE         	EQU    	0X3  	;Port B INT Enable
INTE        	EQU    	0X4 	;Ext INT Enable
TOIE        	EQU    	0X5 	;Timer0 Overflow INT Enable
GIE	        	EQU    	0X7  	;Global INT Enable

;=========================== Port_A Pin Assignment ============================
RA0        		EQU    	0X0 	;RA General I/O
RA1           	EQU    	0X1 	;RA General I/O
RA2           	EQU    	0X2  	;RA General I/O 
RA3           	EQU    	0X3 	;RA General I/O 
RA4           	EQU    	0X4 	;RA General I/O or Timer0 clock input 

;=========================== Port_B Pin Assignment ============================
RB0        		EQU    	0X0 	;RB General I/O
RB1           	EQU    	0X1 	;RB General I/O
RB2           	EQU    	0X2  	;RB General I/O 
RB3           	EQU    	0X3 	;RB General I/O 
RB4           	EQU    	0X4 	;RB General I/O
RB5           	EQU    	0X5 	;RB General I/O 
RB6           	EQU    	0X6 	;RB General I/O 
RB7           	EQU    	0X7 	;RB General I/O 

;=========================== EECON1 Pin Assignment ============================
RD        		EQU    	0X0 	;Read Control Bit
WR           	EQU    	0X1 	;Write Control Bit
WREN           	EQU    	0X2  	;EE Write Enable 
WRERR          	EQU    	0X3 	;EE Error Flag 
EEIF           	EQU    	0X4 	;EE Write INT Flag

;======================= CONFIG Register Control Option =======================
CP_ON			EQU     H'000F'	;Code Protection on
CP_OFF			EQU     H'3FFF'	;Code Protection off

PWRTE_ON		EQU     H'3FF7'	;Power Up Timer enable
PWRTE_OFF		EQU     H'3FFF'	;Power Up Timer disable

WDT_ON			EQU     H'3FFF'	;Watch Dog Timer enable
WDT_OFF			EQU     H'3FFB'	;Watch Dog Timer Disable

LP_OSC			EQU     H'3FFC'	;CPU uses low power crystal (32K - 200K Hz)
XT_OSC			EQU    	H'3FFD'	;CPU uses crystal/resonator (100K - 4M Hz)
HS_OSC			EQU     H'3FFE'	;CPU uses high speed crystal/resonator (4M - 20m Hz)
RC_OSC			EQU     H'3FFF'	;CPU uses resistor/capacitor 

HS_NO_WDT		EQU		H'3FFA'	;CPU runs above 10MHz and WDT off
HS_N0_WDT_PTM	EQU		H'3FF2'	;CPU runs above 10MHz and WDT&PTM off