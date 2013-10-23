#ifndef ASSIGN
#define ASSIGN

///////////////////////////////////////////////////////////
// GLOBAL definitions
///////////////////////////////////////////////////////////

// state of assign_state register
enum {ASSIGN_OFF, ASSIGN_WAIT_CONFIRM, ASSIGN_WAIT_TWEAK_CTRL, ASSIGN_ACTIVE};

///////////////////////////////////////////////////////////
// Function Prototypes
///////////////////////////////////////////////////////////
void AssignEnter(void);
void AssignWaitControl(void);

#endif