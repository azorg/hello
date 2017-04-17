#----------------------------------------------------------------------------
OUT_NAME    := hello
OUT_DIR     := .
CLEAN_FILES := "$(OUT_DIR)/$(OUT_NAME).exe" a.out "hello.ini"
#----------------------------------------------------------------------------
# 1-st way to select source files
SRCS := hello.c lib.c clib/str.c clib/ini.c

HDRS := lib.h clib/str.h clib/ini.h

# 2-nd way to select source files
#SRC_DIRS := . clib
#HDR_DIRS := . clib
#----------------------------------------------------------------------------
#INC_DIRS  := include 
#INC_FLAGS := -Iinclude
#DEFS   := -DDEBUG
#OPTIM  := -g -O0
DEFS    := 
OPTIM   := -Os
WARN    := -Wall
CFLAGS  := $(WARN) $(OPTIM) $(DEFS) $(CFLAGS) -pipe
LDFLAGS := -lm $(LDFLAGS)
PREFIX  := /usr/local
#----------------------------------------------------------------------------
#_AS  := @as
#_CC  := @gcc
#_CXX := @g++
#_LD  := @gcc

#_CC  := @clang
#_CXX := @clang++
#_LD  := @clang
#----------------------------------------------------------------------------
include Makefile.skel
#----------------------------------------------------------------------------

