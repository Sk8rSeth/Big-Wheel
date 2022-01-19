// Defining encoder pins responsible for "rotating"
#define E1 3 //topknobA
#define E2 2 //topKnobB
#define E3 0 //middleKnobA
#define E4 1 //middleKnobB
#define E5 6 //lowerKnobA
#define E6 7 //lowerKnobB
#define E7 4 //WheelA
#define E8 20 //WheelB

const byte allEncPins[] = { E1, E2, // TopRightEnc
                            E3, E4, // MiddleRightEnc
                            E5, E6, // BottomRightEnc
                            E7, E8  // WheelEnc
                          };

// To simplify wiring I got two columns and nine rows = 11 pins in total.
// But one column is gnd, so that's 10 pins for 18 buttons.
// Pro Micro is lacking pins comparing to Teensy.
// Look at wiring diagram for better understandig
#define G5 5
#define B3 8
#define B2 9
#define G1 10
#define B4 16
#define B5 14
#define B6 15
#define G3 18
#define G2 19
#define B1 21



const byte allButtonRowPins[] = {G5, B3, B2, G1, 
                                 B4, B5, B6,
                                 G3, G2, B1
                                };
