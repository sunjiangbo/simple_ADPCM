#include "wave_header.h"

#define MAXDIFF 2047

typedef struct segmentHeader{
	uint16_t keyValue;
	uint16_t numSamples;
	uint16_t segmentBPS; // bits per sample
	uint16_t *segment;
	segmentHeader *nextHeader;
} segmentHeader;

void adpcm_code(segmentHeader **outdata, uint16_t **outdata, const HeaderType inHeader, uint16_t **indata);

void adpcm_decode(HeaderType *outHeader, uint16_t **outdata, const HeaderType inHeader, segmentHeader **indata);
