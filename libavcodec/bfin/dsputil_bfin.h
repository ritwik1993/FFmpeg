/*
 * BlackFin DSPUTILS COMMON OPTIMIZATIONS HEADER
 *
 * Copyright (C) 2007 Marc Hoffman <mmh@pleasantst.com>
 *
 * This file is part of FFmpeg.
 *
 * FFmpeg is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * FFmpeg is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with FFmpeg; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef AVCODEC_BFIN_DSPUTIL_BFIN_H
#define AVCODEC_BFIN_DSPUTIL_BFIN_H

#include <stdint.h>

#include "config.h"
#include "libavutil/bfin/attributes.h"

void ff_bfin_idct(int16_t *block) attribute_l1_text;
void ff_bfin_fdct(int16_t *block) attribute_l1_text;

void ff_bfin_add_pixels_clamped(const int16_t *block, uint8_t *dest,
                                int line_size) attribute_l1_text;
void ff_bfin_put_pixels_clamped(const int16_t *block, uint8_t *dest,
                                int line_size) attribute_l1_text;

void ff_bfin_diff_pixels(int16_t *block, const uint8_t *s1, const uint8_t *s2,
                         int stride)  attribute_l1_text;
void ff_bfin_get_pixels(int16_t *restrict block, const uint8_t *pixels,
                        int line_size) attribute_l1_text;

int ff_bfin_pix_norm1(uint8_t *pix, int line_size) attribute_l1_text;
int ff_bfin_pix_sum(uint8_t *p, int stride) attribute_l1_text;

int ff_bfin_z_sad8x8(uint8_t *blk1, uint8_t *blk2, int dsz,
                     int line_size, int h) attribute_l1_text;
int ff_bfin_z_sad16x16(uint8_t *blk1, uint8_t *blk2, int dsz,
                       int line_size, int h) attribute_l1_text;

int ff_bfin_sse4(void *v, uint8_t *pix1, uint8_t *pix2,
                 int line_size, int h) attribute_l1_text;
int ff_bfin_sse8(void *v, uint8_t *pix1, uint8_t *pix2,
                 int line_size, int h) attribute_l1_text;
int ff_bfin_sse16(void *v, uint8_t *pix1, uint8_t *pix2,
                  int line_size, int h) attribute_l1_text;

#endif /* AVCODEC_BFIN_DSPUTIL_BFIN_H */
