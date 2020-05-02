/**
 * This file is covered by the LICENSE file in the root of this project.
 * Copyright 2020 Aditya Atluri <AdityaAvinash1@gmail.com>
 */
#pragma once

#ifndef DECEPTICON_1_SRC_INCLUDE_DEFINES_H
#define DECEPTICON_1_SRC_INCLUDE_DEFINES_H

#define CUDA_CHECK(status) \
  { \
    cudaError_t err = status; \
    std::cerr << __FILE__ << ":" << __LINE__ << ": " << cudaGetErrorString(err) << std::endl; \
    return 0; \
  } \
#endif
