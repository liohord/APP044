#include <xc.h>

/* Prototype function declaration for functions in the file */
void __attribute__((__interrupt__)) _OscillatorFail(void);
void __attribute__((__interrupt__)) _AddressError(void);
void __attribute__((__interrupt__)) _StackError(void);
void __attribute__((__interrupt__)) _MathError(void);
void __attribute__((__interrupt__)) _DMACError(void);

void __attribute__((interrupt, no_auto_psv)) _OscillatorFail(void) {
    INTCON1bits.OSCFAIL = 0; //Clear the trap flag
    while (1);
}

void __attribute__((interrupt, no_auto_psv)) _AddressError(void) {
    INTCON1bits.ADDRERR = 0; //Clear the trap flag
    while (1);
}

void __attribute__((interrupt, no_auto_psv)) _StackError(void) {
    INTCON1bits.STKERR = 0; //Clear the trap flag
    while (1);
}

void __attribute__((interrupt, no_auto_psv)) _MathError(void) {
    INTCON1bits.MATHERR = 0; //Clear the trap flag
    while (1);
}

void __attribute__((interrupt, no_auto_psv)) _DMACError(void) {
    INTCON1bits.DMACERR = 0; //Clear the trap flag
    while (1);
}
