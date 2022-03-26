#define ABS(Value)

#if Value < 0
#undef ABS
#define ABS(Value) ((Value) * (-1))
#endif
