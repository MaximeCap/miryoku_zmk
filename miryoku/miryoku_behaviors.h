// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

#define U_MT(MOD, TAP) &u_mt MOD TAP
#define U_LT(LAYER, TAP) &u_lt LAYER TAP

// #define MEH LS(LC(LALT))
// #define HYPER LGUI(LS(LC(LALT)))
#define U_MEH (MOD_LCTL|MOD_LALT|MOD_LSFT)
#define U_HYPER (MOD_LGUI|MOD_LCTL|MOD_LALT|MOD_LSFT)
