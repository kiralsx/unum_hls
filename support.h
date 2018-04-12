//
// Created by kiraMac on 9/4/18.
//

#ifndef UNUM_HLS_SUPPORT_H
#define UNUM_HLS_SUPPORT_H

#include "ulayer.h"

typedef struct {
    unsigned int fsize;
    unsigned int esize;
    unsigned int ubit;
} utag_s;

void utag(utag_s *ut, unum_s u);

void printutag(utag_s ut);

bool nanQ(unum_s u);

bool inf(unum_s u);

void bigu(unum_s* v, unum_s u);

#endif //UNUM_HLS_SUPPORT_H
