#include "utils/utils.h"
#include "getError/getError.h"

const char *modeToString(Mode mode)
{
    switch (mode)
    {
    case NIR_LIGHT:
        return "NIR-lys";
    case PLACEBO:
        return "Placebo";
    case RANDOMIZED:
        return "Randomisert";
    default:
        return "UNKNOWN_MODE";
    }
}

const char *durationToString(Duration duration)
{
    switch (duration)
    {
    case DURATION_20_MIN:
        return "20 min";
    case DURATION_30_MIN:
        return "30 min";
    case DURATION_40_MIN:
        return "40 min";
    default:
        return "UNKNOWN_DURATION";
    }
}

const char *pvmFreqToString(PvmFreq pvmFreq)
{
    switch (pvmFreq)
    {
    case CONTINOUS:
        return "Kontinuerlig";
    case LOW_FREQ:
        return "Lav frekvent";
    case HIGH_FREQ:
        return "Hoy frekvent";
    default:
        return "UNKNOWN_PVM_FREQ";
    }
}

Mode intToMode(int value)
{
    get_error[22] = 0;
    switch (value)
    {
    case 1:
        return NIR_LIGHT;
    case 2:
        return PLACEBO;
    case 3:
        return RANDOMIZED;
    default:
        get_error[22] = 1;
        return UNKNOWN_MODE;
    }
}

Duration intToDuration(int value)
{
    get_error[23] = 0;
    switch (value)
    {
    case 1:
        return DURATION_20_MIN;
    case 2:
        return DURATION_30_MIN;
    case 3:
        return DURATION_40_MIN;
    default:
        get_error[23] = 1;
        return UNKNOWN_DURATION;
    }
}

PvmFreq intToPvmFreq(int value)
{
    get_error[24] = 0;
    switch (value)
    {
    case 1:
        return CONTINOUS;
    case 2:
        return LOW_FREQ;
    case 3:
        return HIGH_FREQ;
    default:
        get_error[24] = 1;
        return UNKNOWN_PVM_FREQ;
    }
}