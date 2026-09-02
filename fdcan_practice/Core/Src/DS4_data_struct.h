#ifndef DS4_DATA_STRUCT
#define DS4_DATA_STRUCT

typedef struct{

    uint8_t cross : 1;
    uint8_t circle : 1 ;
    uint8_t triangle : 1;
    uint8_t square : 1;

    uint8_t l1 : 1;
    uint8_t r1 : 1;

    uint8_t share : 1;
    uint8_t options : 1 ;
    uint8_t ps : 1;
    uint8_t : 1; //dummy

    uint8_t l_stick_button : 1;
    uint8_t r_stick_button : 1;

    uint8_t up : 1;
    uint8_t down : 1;
    uint8_t left : 1;
    uint8_t right : 1;

    int8_t l_stick_x;
    int8_t l_stick_y;

    int8_t r_stick_x;
    int8_t r_stick_y;

    int8_t l2; 
    int8_t r2;

}DS4_Controller_Typedef;



#endif
