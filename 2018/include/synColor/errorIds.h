//
// ==================================================================
// Copyright 2014 Autodesk, Inc.  All rights reserved.
// 
// This computer source code  and related  instructions and comments are
// the unpublished confidential and proprietary information of Autodesk,
// Inc. and are  protected  under applicable  copyright and trade secret
// law. They may not  be disclosed to, copied or used by any third party
// without the prior written consent of Autodesk, Inc.
// ==================================================================
//
//! \file synColor/errorIds.h
//!
//! \brief List of SynColor SDK error codes.
//!
//! \remark This file is auto-generated.
//!

#include <synColor/synColorNamespace.h>

#ifndef _SYNCOLOR_ERROR_IDS_H
#define _SYNCOLOR_ERROR_IDS_H

namespace SYNCOLOR
{
  //! \brief List of error message component groups.
  enum Component
  {
    COMP_MASK      = 0xFF000000,

    COMP_UTILS     = 0x01000000,
    COMP_TRANSFORM = 0x02000000,
    COMP_XML       = 0x03000000,
    COMP_RENDERER  = 0x04000000,
    COMP_TEMPLATE  = 0x05000000,
    COMP_SYN_COLOR = 0x06000000
  };

  //! \brief List of error message feature groups.
  enum Feature
  {
    FEATURE_MASK                =                  0x00FF0000,

    FEATURE_UTILS_ALL           = COMP_UTILS     | 0x00010000,
    FEATURE_UTILS_PREFERENCES   = COMP_UTILS     | 0x00020000,
    FEATURE_UTILS_DYNAMIC_PROP  = COMP_UTILS     | 0x00030000,
    FEATURE_UTILS_PLATFORM      = COMP_UTILS     | 0x00040000,

    FEATURE_XML_ALL                = COMP_XML    | 0x00010000,
    FEATURE_XML_READER             = COMP_XML    | 0x00020000,
    FEATURE_XML_WRITER             = COMP_XML    | 0x00030000,
    FEATURE_XML_RESOLVER           = COMP_XML    | 0x00040000,
    FEATURE_XML_PREFS_READER       = COMP_XML    | 0x00050000,
    FEATURE_XML_IO_READER          = COMP_XML    | 0x00060000,
    FEATURE_XML_OCIO_READER        = COMP_XML    | 0x00070000,
    FEATURE_XML_ICC_READER         = COMP_XML    | 0x00080000,
    FEATURE_XML_DISCREET_1D_READER = COMP_XML    | 0x00090000,
    FEATURE_XML_DISCREET_3D_READER = COMP_XML    | 0x000A0000,
    FEATURE_XML_CATALOG_MANAGER    = COMP_XML    | 0x000B0000,
    FEATURE_XML_PREFERENCES        = COMP_XML    | 0x000C0000,

    FEATURE_TRANSFORM_ALL       = COMP_TRANSFORM | 0x00010000,
    FEATURE_TRANSFORM_TRANSFORM = COMP_TRANSFORM | 0x00020000,
    FEATURE_TRANSFORM_MATRIX    = COMP_TRANSFORM | 0x00030000,
    FEATURE_TRANSFORM_LUT_1D    = COMP_TRANSFORM | 0x00040000,
    FEATURE_TRANSFORM_LUT_3D    = COMP_TRANSFORM | 0x00050000,
    FEATURE_TRANSFORM_OPLIST    = COMP_TRANSFORM | 0x00060000,
    FEATURE_TRANSFORM_RANGE     = COMP_TRANSFORM | 0x00070000,
    FEATURE_TRANSFORM_REFERENCE = COMP_TRANSFORM | 0x00080000,
    FEATURE_TRANSFORM_GAMMA     = COMP_TRANSFORM | 0x00090000,
    FEATURE_TRANSFORM_EXPOSURE_CONTRAST \
                                = COMP_TRANSFORM | 0x000A0000,
    FEATURE_TRANSFORM_LOG       = COMP_TRANSFORM | 0x000B0000,
    FEATURE_TRANSFORM_CDL       = COMP_TRANSFORM | 0x000C0000,
    FEATURE_TRANSFORM_METADATA  = COMP_TRANSFORM | 0x000D0000,
    FEATURE_TRANSFORM_GAMUT_MAP = COMP_TRANSFORM | 0x000E0000,
    FEATURE_TRANSFORM_HUE_VECTOR= COMP_TRANSFORM | 0x000F0000,
    FEATURE_TRANSFORM_FUNCTION  = COMP_TRANSFORM | 0x00100000,
    FEATURE_TRANSFORM_ACES      = COMP_TRANSFORM | 0x00200000,
    FEATURE_TRANSFORM_INDEX_MAP = COMP_TRANSFORM | 0x00300000,

    FEATURE_RENDERER_ALL        = COMP_RENDERER  | 0x00010000,
    FEATURE_RENDERER_CPU        = COMP_RENDERER  | 0x00020000,
    FEATURE_RENDERER_GPU        = COMP_RENDERER  | 0x00030000,
    FEATURE_RENDERER_OCIO       = COMP_RENDERER  | 0x00040000,

    FEATURE_TEMPLATE_ALL        = COMP_TEMPLATE  | 0x00010000,
    FEATURE_TEMPLATE_OCIO       = COMP_TEMPLATE  | 0x00020000,
    FEATURE_TEMPLATE_CATALOG    = COMP_TEMPLATE  | 0x00030000,

    FEATURE_SYN_COLOR_TRANSFORM   = COMP_SYN_COLOR  | 0x00010000,
    FEATURE_SYN_COLOR_PATH        = COMP_SYN_COLOR  | 0x00020000,
    FEATURE_SYN_COLOR_PREFS       = COMP_SYN_COLOR  | 0x00030000,
    FEATURE_SYN_COLOR_CACHE       = COMP_SYN_COLOR  | 0x00040000,
    FEATURE_SYN_COLOR_CATALOG     = COMP_SYN_COLOR  | 0x00050000,
    FEATURE_SYN_COLOR_RULES       = COMP_SYN_COLOR  | 0x00060000,
    FEATURE_SYN_COLOR_POLICIES    = COMP_SYN_COLOR  | 0x00070000,
    FEATURE_SYN_COLOR_COLORSPACE  = COMP_SYN_COLOR  | 0x00080000
  };

  //! \brief List of SynColor SDK error codes.
  enum ErrorId
  {
    ERROR_NONE = 0x00,
   ERROR_UTILS_ALL_INDEX_NOT_IN_RANGE = (SYNCOLOR::FEATURE_UTILS_ALL + 1),
   ERROR_UTILS_ALL_INVALID_ROI_WIDTH = (SYNCOLOR::FEATURE_UTILS_ALL + 2),
   ERROR_UTILS_ALL_INVALID_ROI_HEIGHT = (SYNCOLOR::FEATURE_UTILS_ALL + 3),
   ERROR_UTILS_ALL_ILLEGAL_PIXEL_FORMAT = (SYNCOLOR::FEATURE_UTILS_ALL + 4),
   ERROR_UTILS_ALL_ILLEGAL_ATTRIBUTE = (SYNCOLOR::FEATURE_UTILS_ALL + 5),
   ERROR_UTILS_ALL_FILE_LOCK_FAILED = (SYNCOLOR::FEATURE_UTILS_ALL + 6),
   ERROR_UTILS_ALL_FILE_UNLOCK_FAILED = (SYNCOLOR::FEATURE_UTILS_ALL + 7),
   ERROR_UTILS_ALL_STRING_HAS_NO_ALPHANUMERIC = (SYNCOLOR::FEATURE_UTILS_ALL + 8),
   ERROR_UTILS_ALL_LANG_TEST = (SYNCOLOR::FEATURE_UTILS_ALL + 9),
   ERROR_UTILS_ALL_UNKNOWN_XML_TAG = (SYNCOLOR::FEATURE_UTILS_ALL + 10),
   ERROR_UTILS_ALL_OCIO_NOT_IMPLEMENTED = (SYNCOLOR::FEATURE_UTILS_ALL + 11),
   ERROR_UTILS_ALL_INVALID_COLOR_SPACE_TYPE = (SYNCOLOR::FEATURE_UTILS_ALL + 12),
   ERROR_UTILS_ALL_INVALID_COLOR_SPACE_TAG = (SYNCOLOR::FEATURE_UTILS_ALL + 13),
   ERROR_UTILS_ALL_ATTRIBUTE_NOT_FOUND = (SYNCOLOR::FEATURE_UTILS_ALL + 14),
   ERROR_UTILS_PREFERENCES_ALIAS_NOT_FOUND = (SYNCOLOR::FEATURE_UTILS_PREFERENCES + 1),
   ERROR_UTILS_PREFERENCES_ALIAS_NAME_EMPTY = (SYNCOLOR::FEATURE_UTILS_PREFERENCES + 2),
   ERROR_UTILS_PREFERENCES_ALIAS_PATH_EMPTY = (SYNCOLOR::FEATURE_UTILS_PREFERENCES + 3),
   ERROR_UTILS_PREFERENCES_NO_DEFAULT_ALIAS_PATH = (SYNCOLOR::FEATURE_UTILS_PREFERENCES + 4),
   ERROR_UTILS_PREFERENCES_SHARED_PATH_EMPTY = (SYNCOLOR::FEATURE_UTILS_PREFERENCES + 5),
   ERROR_UTILS_PREFERENCES_COLLECTION_PATH_EMPTY = (SYNCOLOR::FEATURE_UTILS_PREFERENCES + 6),
   ERROR_UTILS_PREFERENCES_CONFIG_FILE_PATH_EMPTY = (SYNCOLOR::FEATURE_UTILS_PREFERENCES + 7),
   ERROR_UTILS_PREFERENCES_OBSERVER_NOT_FOUND = (SYNCOLOR::FEATURE_UTILS_PREFERENCES + 8),
   ERROR_UTILS_DYNAMIC_PROP_INVALID_ID = (SYNCOLOR::FEATURE_UTILS_DYNAMIC_PROP + 1),
   ERROR_UTILS_DYNAMIC_PROP_INVALID_PROPERTY = (SYNCOLOR::FEATURE_UTILS_DYNAMIC_PROP + 2),
   ERROR_UTILS_PLATFORM_PROBLEM_GETTING_OS_MNTR_PROF = (SYNCOLOR::FEATURE_UTILS_PLATFORM + 1),
   ERROR_TRANSFORM_ALL_MISSING_ATTS = (SYNCOLOR::FEATURE_TRANSFORM_ALL + 1),
   ERROR_TRANSFORM_ALL_ARRAY_CONTENT_ISSUE = (SYNCOLOR::FEATURE_TRANSFORM_ALL + 2),
   ERROR_TRANSFORM_ALL_CONTENT_EMPTY = (SYNCOLOR::FEATURE_TRANSFORM_ALL + 3),
   ERROR_TRANSFORM_ALL_CONTENT_NUM_VALUES_MISMATCH = (SYNCOLOR::FEATURE_TRANSFORM_ALL + 4),
   ERROR_TRANSFORM_ALL_TRANSFORM_EMPTY = (SYNCOLOR::FEATURE_TRANSFORM_ALL + 5),
   ERROR_TRANSFORM_ALL_MISSING_COLOR_COMPONENT = (SYNCOLOR::FEATURE_TRANSFORM_ALL + 6),
   ERROR_TRANSFORM_ALL_ID_EMPTY = (SYNCOLOR::FEATURE_TRANSFORM_ALL + 7),
   ERROR_TRANSFORM_ALL_PARAM_TOO_LOW = (SYNCOLOR::FEATURE_TRANSFORM_ALL + 8),
   ERROR_TRANSFORM_ALL_PARAM_TOO_HIGH = (SYNCOLOR::FEATURE_TRANSFORM_ALL + 9),
   ERROR_TRANSFORM_ALL_PROPERTY_NOT_AVAILABLE = (SYNCOLOR::FEATURE_TRANSFORM_ALL + 10),
   ERROR_TRANSFORM_ALL_PROPERTY_NOT_AVAILABLE_IN_LIST = (SYNCOLOR::FEATURE_TRANSFORM_ALL + 11),
   ERROR_TRANSFORM_ALL_INVERSE_NOT_IMPLEMENTED = (SYNCOLOR::FEATURE_TRANSFORM_ALL + 12),
   ERROR_TRANSFORM_ALL_UID_EMPTY = (SYNCOLOR::FEATURE_TRANSFORM_ALL + 13),
   ERROR_TRANSFORM_ALL_SHOULD_BE_RESOLVED = (SYNCOLOR::FEATURE_TRANSFORM_ALL + 14),
   ERROR_TRANSFORM_ALL_INVALID_INVERSE_ARGUMENT = (SYNCOLOR::FEATURE_TRANSFORM_ALL + 15),
   ERROR_TRANSFORM_ALL_NULL_TRANSFORMS = (SYNCOLOR::FEATURE_TRANSFORM_ALL + 16),
   ERROR_TRANSFORM_OPLIST_OUT_OF_RANGE = (SYNCOLOR::FEATURE_TRANSFORM_OPLIST + 1),
   ERROR_TRANSFORM_OPLIST_NULL_OP = (SYNCOLOR::FEATURE_TRANSFORM_OPLIST + 2),
   ERROR_TRANSFORM_OPLIST_BIT_DEPTH_MISMATCH = (SYNCOLOR::FEATURE_TRANSFORM_OPLIST + 3),
   ERROR_TRANSFORM_MATRIX_OFFSET_INDEX_OUT_OF_RANGE = (SYNCOLOR::FEATURE_TRANSFORM_MATRIX + 1),
   ERROR_TRANSFORM_MATRIX_COMPOSE_INVALID_DIMENSION = (SYNCOLOR::FEATURE_TRANSFORM_MATRIX + 2),
   ERROR_TRANSFORM_MATRIX_NULL_OFFSET_PTR = (SYNCOLOR::FEATURE_TRANSFORM_MATRIX + 3),
   ERROR_TRANSFORM_MATRIX_SINGULAR_MATRIX = (SYNCOLOR::FEATURE_TRANSFORM_MATRIX + 4),
   ERROR_TRANSFORM_LUT_3D_DIMENSION_NOT_SUPPORTED = (SYNCOLOR::FEATURE_TRANSFORM_LUT_3D + 1),
   ERROR_TRANSFORM_LUT_1D_HALF_DOMAIN_INVALID_ENTRIES = (SYNCOLOR::FEATURE_TRANSFORM_LUT_1D + 1),
   ERROR_TRANSFORM_LUT_1D_UNKNOWN_INVSTYLE = (SYNCOLOR::FEATURE_TRANSFORM_LUT_1D + 2),
   ERROR_TRANSFORM_LUT_1D_INVALID_INVSTYLE_ARGUMENT = (SYNCOLOR::FEATURE_TRANSFORM_LUT_1D + 3),
   ERROR_TRANSFORM_LUT_1D_INVERSE_HALF_DOMAIN_NOT_SUPPORTED = (SYNCOLOR::FEATURE_TRANSFORM_LUT_1D + 4),
   ERROR_TRANSFORM_REFERENCE_MISSING_ALIAS_AND_PATH = (SYNCOLOR::FEATURE_TRANSFORM_REFERENCE + 1),
   ERROR_TRANSFORM_REFERENCE_MISSING_OPS = (SYNCOLOR::FEATURE_TRANSFORM_REFERENCE + 2),
   ERROR_TRANSFORM_REFERENCE_NOT_ALIAS = (SYNCOLOR::FEATURE_TRANSFORM_REFERENCE + 3),
   ERROR_TRANSFORM_RANGE_INCONSISTENT_MIN_BOUNDS = (SYNCOLOR::FEATURE_TRANSFORM_RANGE + 1),
   ERROR_TRANSFORM_RANGE_INCONSISTENT_MAX_BOUNDS = (SYNCOLOR::FEATURE_TRANSFORM_RANGE + 2),
   ERROR_TRANSFORM_RANGE_IN_LIMS_TOO_CLOSE = (SYNCOLOR::FEATURE_TRANSFORM_RANGE + 3),
   ERROR_TRANSFORM_RANGE_INPUT_MAX_LESS_THAN_MIN = (SYNCOLOR::FEATURE_TRANSFORM_RANGE + 4),
   ERROR_TRANSFORM_RANGE_OUTPUT_MAX_LESS_THAN_MIN = (SYNCOLOR::FEATURE_TRANSFORM_RANGE + 5),
   ERROR_TRANSFORM_RANGE_INDEX_MAP_TOO_BIG = (SYNCOLOR::FEATURE_TRANSFORM_RANGE + 6),
   ERROR_TRANSFORM_GAMMA_UNKNOWN_STYLE = (SYNCOLOR::FEATURE_TRANSFORM_GAMMA + 1),
   ERROR_TRANSFORM_GAMMA_WRONG_NUM_PARAMS = (SYNCOLOR::FEATURE_TRANSFORM_GAMMA + 2),
   ERROR_TRANSFORM_GAMMA_MAY_NOT_COMPOSE = (SYNCOLOR::FEATURE_TRANSFORM_GAMMA + 3),
   ERROR_TRANSFORM_EXPOSURE_CONTRAST_UNKNOWN_STYLE = (SYNCOLOR::FEATURE_TRANSFORM_EXPOSURE_CONTRAST + 1),
   ERROR_TRANSFORM_LOG_UNKNOWN_STYLE = (SYNCOLOR::FEATURE_TRANSFORM_LOG + 1),
   ERROR_TRANSFORM_LOG_WRONG_NUM_PARAMS = (SYNCOLOR::FEATURE_TRANSFORM_LOG + 2),
   ERROR_TRANSFORM_LOG_GAMMA_SHOULD_BE_GREATER_THAN_CONSTANT = (SYNCOLOR::FEATURE_TRANSFORM_LOG + 3),
   ERROR_TRANSFORM_LOG_REFWHITE_SHOULD_BE_GREATER_THAN_REFBLACK = (SYNCOLOR::FEATURE_TRANSFORM_LOG + 4),
   ERROR_TRANSFORM_LOG_HIGHLIGHT_SHOULD_BE_GREATER_THAN_SHADOW = (SYNCOLOR::FEATURE_TRANSFORM_LOG + 5),
   ERROR_TRANSFORM_CDL_UNKNOWN_STYLE = (SYNCOLOR::FEATURE_TRANSFORM_CDL + 1),
   ERROR_TRANSFORM_CDL_SHOULD_BE_GREATER_THAN_CONSTANT = (SYNCOLOR::FEATURE_TRANSFORM_CDL + 2),
   ERROR_TRANSFORM_METADATA_EMPTY_NAME = (SYNCOLOR::FEATURE_TRANSFORM_METADATA + 1),
   ERROR_TRANSFORM_METADATA_SHOULD_BE_LEAF = (SYNCOLOR::FEATURE_TRANSFORM_METADATA + 2),
   ERROR_TRANSFORM_METADATA_SHOULD_BE_CONTAINER = (SYNCOLOR::FEATURE_TRANSFORM_METADATA + 3),
   ERROR_TRANSFORM_METADATA_ELEMENT_NOT_FOUND = (SYNCOLOR::FEATURE_TRANSFORM_METADATA + 4),
   ERROR_TRANSFORM_GAMUT_MAP_UNKNOWN_STYLE = (SYNCOLOR::FEATURE_TRANSFORM_GAMUT_MAP + 1),
   ERROR_TRANSFORM_HUE_VECTOR_UNKNOWN_STYLE = (SYNCOLOR::FEATURE_TRANSFORM_HUE_VECTOR + 1),
   ERROR_TRANSFORM_HUE_VECTOR_WRONG_NUM_PARAMS = (SYNCOLOR::FEATURE_TRANSFORM_HUE_VECTOR + 2),
   ERROR_TRANSFORM_FUNCTION_UNKNOWN_STYLE = (SYNCOLOR::FEATURE_TRANSFORM_FUNCTION + 1),
   ERROR_TRANSFORM_ACES_UNKNOWN_STYLE = (SYNCOLOR::FEATURE_TRANSFORM_ACES + 1),
   ERROR_TRANSFORM_ACES_WRONG_NUM_PARAMS = (SYNCOLOR::FEATURE_TRANSFORM_ACES + 2),
   ERROR_TRANSFORM_INDEX_MAP_NON_INCREASING = (SYNCOLOR::FEATURE_TRANSFORM_INDEX_MAP + 1),
   ERROR_XML_ALL_INVALID_TRANSFORM = (SYNCOLOR::FEATURE_XML_ALL + 1),
   ERROR_XML_ALL_INVALID_TRANSFORM_READ = (SYNCOLOR::FEATURE_XML_ALL + 2),
   ERROR_XML_ALL_MEMORY_ALLOCATION_ERROR = (SYNCOLOR::FEATURE_XML_ALL + 3),
   ERROR_XML_ALL_INVALID_FIRST_ELEMENT = (SYNCOLOR::FEATURE_XML_ALL + 4),
   ERROR_XML_ALL_INVALID_TRANSFORM_SUPPLIED_FOR_WRITING = (SYNCOLOR::FEATURE_XML_ALL + 5),
   ERROR_XML_READER_PARSING_ERROR = (SYNCOLOR::FEATURE_XML_READER + 1),
   ERROR_XML_READER_PARSING_ELEMENT_MISSING = (SYNCOLOR::FEATURE_XML_READER + 2),
   ERROR_XML_READER_PARSING_UNBALANCED_TAG = (SYNCOLOR::FEATURE_XML_READER + 3),
   ERROR_XML_READER_PARSING_MISSING_TAG_END = (SYNCOLOR::FEATURE_XML_READER + 4),
   ERROR_XML_READER_PARSING_ATTRIBUTE_ILLEGAL = (SYNCOLOR::FEATURE_XML_READER + 5),
   ERROR_XML_READER_MISSING_ATTS = (SYNCOLOR::FEATURE_XML_READER + 6),
   ERROR_XML_READER_EMPTY_ATTS = (SYNCOLOR::FEATURE_XML_READER + 7),
   ERROR_XML_READER_ILLEGAL_CHARACTERS = (SYNCOLOR::FEATURE_XML_READER + 8),
   ERROR_XML_READER_UNKNOWN_VALUE = (SYNCOLOR::FEATURE_XML_READER + 9),
   ERROR_XML_READER_ARRAY_ILLEGAL_DIMENSION = (SYNCOLOR::FEATURE_XML_READER + 10),
   ERROR_XML_READER_ARRAY_MISSING_VALUES = (SYNCOLOR::FEATURE_XML_READER + 11),
   ERROR_XML_READER_ARRAY_TOO_MANY_VALUES = (SYNCOLOR::FEATURE_XML_READER + 12),
   ERROR_XML_READER_ARRAY_INCOMPLETE = (SYNCOLOR::FEATURE_XML_READER + 13),
   ERROR_XML_READER_ARRAY_ILLEGAL_VALUES = (SYNCOLOR::FEATURE_XML_READER + 14),
   ERROR_XML_READER_ILLEGAL_HALF_DOMAIN_VALUE = (SYNCOLOR::FEATURE_XML_READER + 15),
   ERROR_XML_READER_ILLEGAL_RAW_HALFS_VALUE = (SYNCOLOR::FEATURE_XML_READER + 16),
   ERROR_XML_READER_ATTRIBUTE_NOT_SUPPORTED = (SYNCOLOR::FEATURE_XML_READER + 17),
   ERROR_XML_READER_ALIAS_UNEXPECTED_ATTRIBUTE = (SYNCOLOR::FEATURE_XML_READER + 18),
   ERROR_XML_READER_ILLEGAL_CHAN = (SYNCOLOR::FEATURE_XML_READER + 19),
   ERROR_XML_READER_MISSING_REQD_PARAM = (SYNCOLOR::FEATURE_XML_READER + 20),
   ERROR_XML_READER_ILLEGAL_PARAM = (SYNCOLOR::FEATURE_XML_READER + 21),
   ERROR_XML_READER_RANGE_WRONG_NUM_VALUES = (SYNCOLOR::FEATURE_XML_READER + 22),
   ERROR_XML_READER_ATTRIBUTE_DATA_EMPTY = (SYNCOLOR::FEATURE_XML_READER + 23),
   ERROR_XML_READER_FILE_OPEN_FAILED = (SYNCOLOR::FEATURE_XML_READER + 24),
   ERROR_XML_READER_INVALID_DYNAMIC_PARAMETER = (SYNCOLOR::FEATURE_XML_READER + 25),
   ERROR_XML_READER_NO_OPS = (SYNCOLOR::FEATURE_XML_READER + 26),
   ERROR_XML_READER_PROCESS_LIST_INVALID_VERSION = (SYNCOLOR::FEATURE_XML_READER + 27),
   ERROR_XML_READER_PROCESS_LIST_VERSION_MISMATCH = (SYNCOLOR::FEATURE_XML_READER + 28),
   ERROR_XML_READER_INFO_ELEMENT_INVALID_VERSION = (SYNCOLOR::FEATURE_XML_READER + 29),
   ERROR_XML_READER_INFO_ELEMENT_VERSION_UNSUPPORTED = (SYNCOLOR::FEATURE_XML_READER + 30),
   ERROR_XML_READER_OP_VERSION_MISMATCH = (SYNCOLOR::FEATURE_XML_READER + 31),
   ERROR_XML_READER_SOPNODE_WRONG_NUM_VALUES = (SYNCOLOR::FEATURE_XML_READER + 32),
   ERROR_XML_READER_SOPNODE_MISSING_SLOPE = (SYNCOLOR::FEATURE_XML_READER + 33),
   ERROR_XML_READER_SOPNODE_MISSING_OFFSET = (SYNCOLOR::FEATURE_XML_READER + 34),
   ERROR_XML_READER_SOPNODE_MISSING_POWER = (SYNCOLOR::FEATURE_XML_READER + 35),
   ERROR_XML_READER_SATNODE_WRONG_NUM_VALUES = (SYNCOLOR::FEATURE_XML_READER + 36),
   ERROR_XML_READER_INVALID_VALUE_FOR_DYNAMIC_PARAMETER = (SYNCOLOR::FEATURE_XML_READER + 37),
   ERROR_XML_READER_ILLEGAL_BYPASS_VALUE = (SYNCOLOR::FEATURE_XML_READER + 38),
   ERROR_XML_READER_ILLEGAL_HUE_ADJUST_VALUE = (SYNCOLOR::FEATURE_XML_READER + 39),
   ERROR_XML_READER_INTERNAL_PARSING_ERROR = (SYNCOLOR::FEATURE_XML_READER + 40),
   ERROR_XML_READER_ILLEGAL_SAT_ADJUST_VALUE = (SYNCOLOR::FEATURE_XML_READER + 41),
   ERROR_XML_READER_TOO_MANY_INDEX_MAPS = (SYNCOLOR::FEATURE_XML_READER + 42),
   ERROR_XML_IO_READER_UNSUPPORTED_FILE = (SYNCOLOR::FEATURE_XML_IO_READER + 1),
   ERROR_XML_IO_READER_NOT_A_FILE = (SYNCOLOR::FEATURE_XML_IO_READER + 2),
   ERROR_XML_IO_READER_NO_FILE = (SYNCOLOR::FEATURE_XML_IO_READER + 3),
   ERROR_XML_IO_READER_FILESYSTEM_ERROR = (SYNCOLOR::FEATURE_XML_IO_READER + 4),
   ERROR_XML_IO_READER_READ_ERROR = (SYNCOLOR::FEATURE_XML_IO_READER + 5),
   ERROR_XML_IO_READER_INPUT_BUFFER_FORMAT_NOT_SUPPORTED = (SYNCOLOR::FEATURE_XML_IO_READER + 6),
   ERROR_XML_OCIO_READER_GENERIC_ERROR = (SYNCOLOR::FEATURE_XML_OCIO_READER + 1),
   ERROR_XML_OCIO_READER_PARSE_BUFFER = (SYNCOLOR::FEATURE_XML_OCIO_READER + 2),
   ERROR_XML_OCIO_READER_UNSUPPORTED_OPERATION = (SYNCOLOR::FEATURE_XML_OCIO_READER + 3),
   ERROR_XML_OCIO_READER_LUT1D_ILLEGAL_OP = (SYNCOLOR::FEATURE_XML_OCIO_READER + 4),
   ERROR_XML_OCIO_READER_LUT1D_UNMATCHING_SIZES = (SYNCOLOR::FEATURE_XML_OCIO_READER + 5),
   ERROR_XML_OCIO_READER_LUT3D_ILLEGAL_OP = (SYNCOLOR::FEATURE_XML_OCIO_READER + 6),
   ERROR_XML_OCIO_READER_LUT3D_UNMATCHING_SIZES = (SYNCOLOR::FEATURE_XML_OCIO_READER + 7),
   ERROR_XML_OCIO_READER_MATRIX_ILLEGAL_OP = (SYNCOLOR::FEATURE_XML_OCIO_READER + 8),
   ERROR_XML_OCIO_READER_EXPONENT_ILLEGAL_OP = (SYNCOLOR::FEATURE_XML_OCIO_READER + 9),
   ERROR_XML_OCIO_READER_LOG_ILLEGAL_OP = (SYNCOLOR::FEATURE_XML_OCIO_READER + 10),
   ERROR_XML_OCIO_READER_LUT3D_INVERSEOP = (SYNCOLOR::FEATURE_XML_OCIO_READER + 11),
   ERROR_XML_WRITER_NULL_TRANSFORM = (SYNCOLOR::FEATURE_XML_WRITER + 1),
   ERROR_XML_WRITER_UNABLE_TO_WRITE_FILE = (SYNCOLOR::FEATURE_XML_WRITER + 2),
   ERROR_XML_WRITER_UNABLE_TO_WRITE_EXISTING_FILE = (SYNCOLOR::FEATURE_XML_WRITER + 3),
   ERROR_XML_WRITER_INVALID_PATH = (SYNCOLOR::FEATURE_XML_WRITER + 4),
   ERROR_XML_WRITER_BIT_DEPTH_UNKNOWN = (SYNCOLOR::FEATURE_XML_WRITER + 5),
   ERROR_XML_WRITER_OUTPUT_FORMAT_NOT_SUPPORTED = (SYNCOLOR::FEATURE_XML_WRITER + 6),
   ERROR_XML_WRITER_UNSUPPORTED_WRITER_TRANSFORM = (SYNCOLOR::FEATURE_XML_WRITER + 7),
   ERROR_XML_RESOLVER_MISSING_BASE_PATH = (SYNCOLOR::FEATURE_XML_RESOLVER + 1),
   ERROR_XML_RESOLVER_CYCLE_DETECTED = (SYNCOLOR::FEATURE_XML_RESOLVER + 2),
   ERROR_XML_RESOLVER_REFERENCE_FAILED_TO_LOAD = (SYNCOLOR::FEATURE_XML_RESOLVER + 3),
   ERROR_XML_RESOLVER_MISSING_REFERENCE = (SYNCOLOR::FEATURE_XML_RESOLVER + 4),
   ERROR_XML_PREFS_READER_ALIAS_EMPTY = (SYNCOLOR::FEATURE_XML_PREFS_READER + 1),
   ERROR_XML_PREFS_READER_PATH_EMPTY = (SYNCOLOR::FEATURE_XML_PREFS_READER + 2),
   ERROR_XML_PREFS_READER_VERSION_EMPTY = (SYNCOLOR::FEATURE_XML_PREFS_READER + 3),
   ERROR_XML_PREFS_READER_DIR_EMPTY = (SYNCOLOR::FEATURE_XML_PREFS_READER + 4),
   ERROR_XML_PREFS_READER_SYNCOLORCONFIG_ERROR = (SYNCOLOR::FEATURE_XML_PREFS_READER + 5),
   ERROR_XML_PREFS_READER_SHARED_PATH_SET = (SYNCOLOR::FEATURE_XML_PREFS_READER + 6),
   ERROR_XML_PREFS_READER_SYNCOLORCONFIG_FIRST = (SYNCOLOR::FEATURE_XML_PREFS_READER + 7),
   ERROR_XML_PREFS_READER_REF_OUTSIDE_TABLE = (SYNCOLOR::FEATURE_XML_PREFS_READER + 8),
   ERROR_XML_PREFS_READER_SHARED_PATH_OUTSIDE = (SYNCOLOR::FEATURE_XML_PREFS_READER + 9),
   ERROR_XML_PREFS_READER_REF_TABLE_OUTSIDE = (SYNCOLOR::FEATURE_XML_PREFS_READER + 10),
   ERROR_XML_PREFS_READER_AUTO_CONFIGURE_OUTSIDE = (SYNCOLOR::FEATURE_XML_PREFS_READER + 11),
   ERROR_XML_PREFS_READER_EMPTY_PREFERENCES = (SYNCOLOR::FEATURE_XML_PREFS_READER + 12),
   ERROR_XML_PREFS_READER_TRANSFORMS_PATH_OUTSIDE = (SYNCOLOR::FEATURE_XML_PREFS_READER + 13),
   ERROR_XML_PREFS_READER_TRANSFORMS_PATH_SET = (SYNCOLOR::FEATURE_XML_PREFS_READER + 14),
   ERROR_XML_PREFS_READER_TRANSFORMS_PATH_DOES_NOT_EXIST = (SYNCOLOR::FEATURE_XML_PREFS_READER + 15),
   ERROR_XML_ICC_READER_PARSE_BUFFER = (SYNCOLOR::FEATURE_XML_ICC_READER + 1),
   ERROR_XML_ICC_READER_UNSUPPORTED_PCS = (SYNCOLOR::FEATURE_XML_ICC_READER + 2),
   ERROR_XML_ICC_READER_UNSUPPORTED_COLOR_SPACE = (SYNCOLOR::FEATURE_XML_ICC_READER + 3),
   ERROR_XML_ICC_READER_UNSUPPORTED_MODEL = (SYNCOLOR::FEATURE_XML_ICC_READER + 4),
   ERROR_XML_ICC_READER_UNSUPPORTED_MATRIX = (SYNCOLOR::FEATURE_XML_ICC_READER + 5),
   ERROR_XML_ICC_READER_UNSUPPORTED_B_CURVE = (SYNCOLOR::FEATURE_XML_ICC_READER + 6),
   ERROR_XML_ICC_READER_INTEGRITY_ISSUE = (SYNCOLOR::FEATURE_XML_ICC_READER + 7),
   ERROR_XML_DISCREET_1D_READER_PARSE_BUFFER = (SYNCOLOR::FEATURE_XML_DISCREET_1D_READER + 1),
   ERROR_XML_DISCREET_1D_READER_READ_ERROR = (SYNCOLOR::FEATURE_XML_DISCREET_1D_READER + 2),
   ERROR_XML_DISCREET_3D_READER_PARSE_BUFFER = (SYNCOLOR::FEATURE_XML_DISCREET_3D_READER + 1),
   ERROR_XML_DISCREET_3D_READER_READ_ERROR = (SYNCOLOR::FEATURE_XML_DISCREET_3D_READER + 2),
   ERROR_XML_DISCREET_3D_READER_BIT_DEPTH_ERROR = (SYNCOLOR::FEATURE_XML_DISCREET_3D_READER + 3),
   ERROR_XML_DISCREET_3D_READER_UNSUPPORTED_DIMENSION_ERROR = (SYNCOLOR::FEATURE_XML_DISCREET_3D_READER + 4),
   ERROR_XML_CATALOG_MANAGER_DIRECTORY_NOT_FOUND = (SYNCOLOR::FEATURE_XML_CATALOG_MANAGER + 1),
   ERROR_XML_CATALOG_MANAGER_ILLEGAL_CATALOG_FILENAME = (SYNCOLOR::FEATURE_XML_CATALOG_MANAGER + 2),
   ERROR_XML_CATALOG_MANAGER_LOAD_ERROR = (SYNCOLOR::FEATURE_XML_CATALOG_MANAGER + 3),
   ERROR_XML_CATALOG_MANAGER_WORKING_SPACE_TRANSFORM_NOT_FOUND = (SYNCOLOR::FEATURE_XML_CATALOG_MANAGER + 4),
   ERROR_XML_CATALOG_MANAGER_TAG_ONLY_OR_WORKING_SPACE_TRANSFORM_NOT_FOUND = (SYNCOLOR::FEATURE_XML_CATALOG_MANAGER + 5),
   ERROR_XML_CATALOG_MANAGER_VIEW_TRANSFORM_NOT_FOUND = (SYNCOLOR::FEATURE_XML_CATALOG_MANAGER + 6),
   ERROR_XML_CATALOG_MANAGER_PURE_VIEW_TRANSFORM_NOT_FOUND = (SYNCOLOR::FEATURE_XML_CATALOG_MANAGER + 7),
   ERROR_XML_CATALOG_MANAGER_DISPLAY_SPACE_TRANSFORM_NOT_FOUND = (SYNCOLOR::FEATURE_XML_CATALOG_MANAGER + 8),
   ERROR_XML_CATALOG_MANAGER_INPUT_SPACE_TRANSFORM_NOT_FOUND = (SYNCOLOR::FEATURE_XML_CATALOG_MANAGER + 9),
   ERROR_XML_CATALOG_MANAGER_WORKING_SPACE_MISSING_OUTPUT_SPACE_ID = (SYNCOLOR::FEATURE_XML_CATALOG_MANAGER + 10),
   ERROR_XML_CATALOG_MANAGER_TRANSFORM_TO_CONNECTION_SPACE_NOT_FOUND = (SYNCOLOR::FEATURE_XML_CATALOG_MANAGER + 13),
   ERROR_XML_CATALOG_MANAGER_TRANSFORM_FROM_CONNECTION_SPACE_NOT_FOUND = (SYNCOLOR::FEATURE_XML_CATALOG_MANAGER + 14),
   ERROR_XML_CATALOG_MANAGER_UNABLE_TO_CONNECT = (SYNCOLOR::FEATURE_XML_CATALOG_MANAGER + 15),
   ERROR_XML_CATALOG_MANAGER_ILLEGAL_IMAGE_STATE = (SYNCOLOR::FEATURE_XML_CATALOG_MANAGER + 16),
   ERROR_XML_CATALOG_MANAGER_TRANSFORMS_NOT_INSTALLED = (SYNCOLOR::FEATURE_XML_CATALOG_MANAGER + 17),
   ERROR_XML_CATALOG_MANAGER_SHARED_CATALOG_ERROR = (SYNCOLOR::FEATURE_XML_CATALOG_MANAGER + 18),
   ERROR_XML_CATALOG_MANAGER_PACKAGE_NOT_INSTALLED = (SYNCOLOR::FEATURE_XML_CATALOG_MANAGER + 19),
   ERROR_XML_CATALOG_MANAGER_INPUT_SPACE_MISSING_OUTPUT_SPACE_ID = (SYNCOLOR::FEATURE_XML_CATALOG_MANAGER + 20),
   ERROR_XML_CATALOG_MANAGER_ILLEGAL_ID = (SYNCOLOR::FEATURE_XML_CATALOG_MANAGER + 21),
   ERROR_XML_CATALOG_MANAGER_ILLEGAL_PRODUCT = (SYNCOLOR::FEATURE_XML_CATALOG_MANAGER + 22),
   ERROR_XML_CATALOG_MANAGER_MIXING_TEMPLATE_PARAMETERS_NOT_SUPPORTED = (SYNCOLOR::FEATURE_XML_CATALOG_MANAGER + 23),
   ERROR_XML_CATALOG_MANAGER_NATIVE_CATALOG_MISSING = (SYNCOLOR::FEATURE_XML_CATALOG_MANAGER + 24),
   ERROR_XML_PREFERENCES_INSTALLATION_CORRUPTED = (SYNCOLOR::FEATURE_XML_PREFERENCES + 1),
   ERROR_TEMPLATE_ALL_MISSING_BASE_PATH = (SYNCOLOR::FEATURE_TEMPLATE_ALL + 1),
   ERROR_TEMPLATE_ALL_ILLEGAL_PARAMETER_SELECTION = (SYNCOLOR::FEATURE_TEMPLATE_ALL + 2),
   ERROR_TEMPLATE_ALL_ILLEGAL_PARAMETER_SELECTION_VALUE = (SYNCOLOR::FEATURE_TEMPLATE_ALL + 3),
   ERROR_TEMPLATE_ALL_ILLEGAL_PRODUCT_NAME = (SYNCOLOR::FEATURE_TEMPLATE_ALL + 4),
   ERROR_TEMPLATE_ALL_PARAMETER_NOT_FOUND = (SYNCOLOR::FEATURE_TEMPLATE_ALL + 5),
   ERROR_TEMPLATE_ALL_ILLEGAL_PARAMETER_VALUE = (SYNCOLOR::FEATURE_TEMPLATE_ALL + 6),
   ERROR_TEMPLATE_OCIO_GENERIC_CONFIG_ERROR = (SYNCOLOR::FEATURE_TEMPLATE_OCIO + 1),
   ERROR_TEMPLATE_OCIO_NOT_A_FILE = (SYNCOLOR::FEATURE_TEMPLATE_OCIO + 2),
   ERROR_TEMPLATE_OCIO_NO_FILE = (SYNCOLOR::FEATURE_TEMPLATE_OCIO + 3),
   ERROR_TEMPLATE_OCIO_CONFIG_PROBLEM_NO_COLOR_SPACES = (SYNCOLOR::FEATURE_TEMPLATE_OCIO + 4),
   ERROR_TEMPLATE_OCIO_CONFIG_PROBLEM_NO_VIEW_TRANSFORMS = (SYNCOLOR::FEATURE_TEMPLATE_OCIO + 5),
   ERROR_TEMPLATE_OCIO_NOT_A_VALID_DISPLAY_NAME = (SYNCOLOR::FEATURE_TEMPLATE_OCIO + 6),
   ERROR_TEMPLATE_OCIO_NOT_A_VALID_VIEW_NAME = (SYNCOLOR::FEATURE_TEMPLATE_OCIO + 7),
   ERROR_TEMPLATE_OCIO_NOT_A_VALID_COLOR_SPACE_NAME = (SYNCOLOR::FEATURE_TEMPLATE_OCIO + 8),
   ERROR_TEMPLATE_OCIO_INVALID_COMBINATION = (SYNCOLOR::FEATURE_TEMPLATE_OCIO + 9),
   ERROR_TEMPLATE_OCIO_INVALID_OCIO_VIEW = (SYNCOLOR::FEATURE_TEMPLATE_OCIO + 10),
   ERROR_TEMPLATE_OCIO_NO_COLOR_PICKER_ROLE = (SYNCOLOR::FEATURE_TEMPLATE_OCIO + 11),
   ERROR_TEMPLATE_OCIO_INVALID_COLOR_PICKER_ROLE = (SYNCOLOR::FEATURE_TEMPLATE_OCIO + 12),
   ERROR_TEMPLATE_OCIO_INVALID_RENDERING_SPACE = (SYNCOLOR::FEATURE_TEMPLATE_OCIO + 13),
   ERROR_TEMPLATE_OCIO_INVALID_COMBINATION_WITH_LOOK = (SYNCOLOR::FEATURE_TEMPLATE_OCIO + 14),
   ERROR_TEMPLATE_OCIO_INVALID_VIEW_TRANSFORM_NAME = (SYNCOLOR::FEATURE_TEMPLATE_OCIO + 15),
   ERROR_TEMPLATE_CATALOG_WORKING_SPACE_MISSING_OUTPUT_SPACE_ID = (SYNCOLOR::FEATURE_TEMPLATE_CATALOG + 1),
   ERROR_RENDERER_ALL_NULL_IMAGE = (SYNCOLOR::FEATURE_RENDERER_ALL + 1),
   ERROR_RENDERER_ALL_NULL_TRANSFORM = (SYNCOLOR::FEATURE_RENDERER_ALL + 2),
   ERROR_RENDERER_ALL_EMPTY_TRANSFORM = (SYNCOLOR::FEATURE_RENDERER_ALL + 3),
   ERROR_RENDERER_ALL_RENDERER_INVALID = (SYNCOLOR::FEATURE_RENDERER_ALL + 4),
   ERROR_RENDERER_ALL_UNRESOLVED_TRANSFORM = (SYNCOLOR::FEATURE_RENDERER_ALL + 5),
   ERROR_RENDERER_ALL_OPT_NULL_ACTION = (SYNCOLOR::FEATURE_RENDERER_ALL + 6),
   ERROR_RENDERER_ALL_OPTIMIZATION_FAILED = (SYNCOLOR::FEATURE_RENDERER_ALL + 7),
   ERROR_RENDERER_ALL_UNFINALIZED_TRANSFORM = (SYNCOLOR::FEATURE_RENDERER_ALL + 8),
   ERROR_RENDERER_ALL_ROW_OUT_OF_BOUNDS = (SYNCOLOR::FEATURE_RENDERER_ALL + 9),
   ERROR_RENDERER_ALL_INVALID_RENDERER_IDX = (SYNCOLOR::FEATURE_RENDERER_ALL + 10),
   ERROR_RENDERER_ALL_UNSUPPORTED_HUE_ADJUST = (SYNCOLOR::FEATURE_RENDERER_ALL + 11),
   ERROR_RENDERER_ALL_DIFFERENT_BYPASS_STATES = (SYNCOLOR::FEATURE_RENDERER_ALL + 12),
   ERROR_RENDERER_ALL_NON_SEPARABLE_OP = (SYNCOLOR::FEATURE_RENDERER_ALL + 13),
   ERROR_RENDERER_CPU_OP_ILLEGAL_ATTRIBUTE = (SYNCOLOR::FEATURE_RENDERER_CPU + 1),
   ERROR_RENDERER_CPU_BIT_DEPTH_MISSING = (SYNCOLOR::FEATURE_RENDERER_CPU + 2),
   ERROR_RENDERER_CPU_NULL_OP = (SYNCOLOR::FEATURE_RENDERER_CPU + 3),
   ERROR_RENDERER_CPU_ILLEGAL_LOG_STYLE = (SYNCOLOR::FEATURE_RENDERER_CPU + 4),
   ERROR_RENDERER_GPU_MATRIX_SHADER_COMPILATION_FAILED = (SYNCOLOR::FEATURE_RENDERER_GPU + 1),
   ERROR_RENDERER_GPU_NULL_STRING = (SYNCOLOR::FEATURE_RENDERER_GPU + 2),
   ERROR_RENDERER_GPU_ADAPTOR_UNDEFINED_LANGUAGE = (SYNCOLOR::FEATURE_RENDERER_GPU + 3),
   ERROR_RENDERER_GPU_ADAPTOR_ERROR = (SYNCOLOR::FEATURE_RENDERER_GPU + 4),
   ERROR_RENDERER_GPU_UNSUPPORTED_BAYER_MATRIX_SIZE = (SYNCOLOR::FEATURE_RENDERER_GPU + 5),
   ERROR_RENDERER_OCIO_UNSUPPORTED_OP = (SYNCOLOR::FEATURE_RENDERER_OCIO + 1),
   ERROR_RENDERER_OCIO_UNSUPPORTED_INPUT_HALF_DOMAIN = (SYNCOLOR::FEATURE_RENDERER_OCIO + 2),
   ERROR_RENDERER_OCIO_UNSUPPORTED_OUTPUT_RAW_HALFS = (SYNCOLOR::FEATURE_RENDERER_OCIO + 3),
   ERROR_SYN_COLOR_TRANSFORM_MISSING_CPU_RENDERER = (SYNCOLOR::FEATURE_SYN_COLOR_TRANSFORM + 1),
   ERROR_SYN_COLOR_TRANSFORM_MISSING_GPU_RENDERER = (SYNCOLOR::FEATURE_SYN_COLOR_TRANSFORM + 2),
   ERROR_SYN_COLOR_TRANSFORM_NULL_TRANSFORM = (SYNCOLOR::FEATURE_SYN_COLOR_TRANSFORM + 3),
   ERROR_SYN_COLOR_TRANSFORM_NULL_GPUADAPTOR = (SYNCOLOR::FEATURE_SYN_COLOR_TRANSFORM + 4),
   ERROR_SYN_COLOR_PATH_NOT_FOUND = (SYNCOLOR::FEATURE_SYN_COLOR_PATH + 1),
   ERROR_SYN_COLOR_PATH_NOT_DIRECTORY = (SYNCOLOR::FEATURE_SYN_COLOR_PATH + 2),
   ERROR_SYN_COLOR_PATH_READ_ERROR = (SYNCOLOR::FEATURE_SYN_COLOR_PATH + 3),
   ERROR_SYN_COLOR_PATH_INVALID_PARAMETER = (SYNCOLOR::FEATURE_SYN_COLOR_PATH + 4),
   ERROR_SYN_COLOR_PREFS_NULL_PARAMETER = (SYNCOLOR::FEATURE_SYN_COLOR_PREFS + 1),
   ERROR_SYN_COLOR_PREFS_EMPTY_ALIAS = (SYNCOLOR::FEATURE_SYN_COLOR_PREFS + 2),
   ERROR_SYN_COLOR_PREFS_ALIAS_NOT_FOUND = (SYNCOLOR::FEATURE_SYN_COLOR_PREFS + 3),
   ERROR_SYN_COLOR_PREFS_UNRESOLVED_REFERENCES = (SYNCOLOR::FEATURE_SYN_COLOR_PREFS + 4),
   ERROR_SYN_COLOR_PREFS_ALREADY_LOADED = (SYNCOLOR::FEATURE_SYN_COLOR_PREFS + 5),
   ERROR_SYN_COLOR_PREFS_INVALID_PATH = (SYNCOLOR::FEATURE_SYN_COLOR_PREFS + 6),
   ERROR_SYN_COLOR_PREFS_PREFS_FILE_DOES_NOT_EXIST = (SYNCOLOR::FEATURE_SYN_COLOR_PREFS + 7),
   ERROR_SYN_COLOR_PREFS_TRANSFORMS_PATH_DOES_NOT_EXIST = (SYNCOLOR::FEATURE_SYN_COLOR_PREFS + 8),
   ERROR_SYN_COLOR_PREFS_FOUND_TRANSFORMS_PATH_DOES_NOT_EXIST = (SYNCOLOR::FEATURE_SYN_COLOR_PREFS + 9),
   ERROR_SYN_COLOR_PREFS_UNSUPPORTED_OS_MONITOR_PROFILE = (SYNCOLOR::FEATURE_SYN_COLOR_PREFS + 10),
   ERROR_SYN_COLOR_PREFS_ERROR_CREATING_USER_DISPLAY_TRANFORM_FOR_OS_MONITOR_PROFILE = (SYNCOLOR::FEATURE_SYN_COLOR_PREFS + 11),
   ERROR_SYN_COLOR_CACHE_MISS = (SYNCOLOR::FEATURE_SYN_COLOR_CACHE + 1),
   ERROR_SYN_COLOR_CACHE_INVALID_DATA = (SYNCOLOR::FEATURE_SYN_COLOR_CACHE + 2),
   ERROR_SYN_COLOR_CACHE_TRANSFORM_EXISTS = (SYNCOLOR::FEATURE_SYN_COLOR_CACHE + 3),
   ERROR_SYN_COLOR_CACHE_INVALID_TRANSFORMID = (SYNCOLOR::FEATURE_SYN_COLOR_CACHE + 4),
   ERROR_SYN_COLOR_CACHE_INVALID_ADAPTORID = (SYNCOLOR::FEATURE_SYN_COLOR_CACHE + 4),
   ERROR_SYN_COLOR_CATALOG_PATH_DOES_NOT_EXIST = (SYNCOLOR::FEATURE_SYN_COLOR_CATALOG + 1),
   ERROR_SYN_COLOR_CATALOG_NAME_ALREADY_EXISTS = (SYNCOLOR::FEATURE_SYN_COLOR_CATALOG + 2),
   ERROR_SYN_COLOR_CATALOG_ADD_FAILED = (SYNCOLOR::FEATURE_SYN_COLOR_CATALOG + 3),
   ERROR_SYN_COLOR_CATALOG_REMOVE_FAILED = (SYNCOLOR::FEATURE_SYN_COLOR_CATALOG + 4),
   ERROR_SYN_COLOR_CATALOG_UNKNOWN_CONNECTION_SPACE = (SYNCOLOR::FEATURE_SYN_COLOR_CATALOG + 5),
   ERROR_SYN_COLOR_CATALOG_NAME_IS_NULL = (SYNCOLOR::FEATURE_SYN_COLOR_CATALOG + 6),
   ERROR_SYN_COLOR_CATALOG_PATH_IS_NULL = (SYNCOLOR::FEATURE_SYN_COLOR_CATALOG + 7),
   ERROR_SYN_COLOR_CATALOG_INVALID_SHARED_PATH = (SYNCOLOR::FEATURE_SYN_COLOR_CATALOG + 8),
   ERROR_SYN_COLOR_CATALOG_CONNECTION_SPACE_REQUIRED = (SYNCOLOR::FEATURE_SYN_COLOR_CATALOG + 9),
   ERROR_SYN_COLOR_CATALOG_DISPLAY_TYPE_REQUIRED = (SYNCOLOR::FEATURE_SYN_COLOR_CATALOG + 10),
   ERROR_SYN_COLOR_CATALOG_SERIALIZE_FAILED = (SYNCOLOR::FEATURE_SYN_COLOR_CATALOG + 11),
   ERROR_SYN_COLOR_CATALOG_INVALID_SERIALIZED_COLOR_SPACE_PARAMETER = (SYNCOLOR::FEATURE_SYN_COLOR_CATALOG + 12),
   ERROR_SYN_COLOR_CATALOG_UNKNOWN_USER_COLOR_SPACE_TYPE = (SYNCOLOR::FEATURE_SYN_COLOR_CATALOG + 13),
   ERROR_SYN_COLOR_CATALOG_USER_COLOR_SPACE_DIFFERS = (SYNCOLOR::FEATURE_SYN_COLOR_CATALOG + 14),
   ERROR_SYN_COLOR_CATALOG_NULL_TRANSFORM = (SYNCOLOR::FEATURE_SYN_COLOR_CATALOG + 15),
   ERROR_SYN_COLOR_CATALOG_USER_FACING_NAME_IS_NULL = (SYNCOLOR::FEATURE_SYN_COLOR_CATALOG + 16),
   ERROR_SYN_COLOR_CATALOG_CONNECTION_SPACE_IS_INVALID = (SYNCOLOR::FEATURE_SYN_COLOR_CATALOG + 17),
   ERROR_SYN_COLOR_CATALOG_DISPLAY_TYPE_IS_INVALID = (SYNCOLOR::FEATURE_SYN_COLOR_CATALOG + 18),
   ERROR_SYN_COLOR_CATALOG_PURE_VIEW_INPUT_SPACE_IS_INVALID = (SYNCOLOR::FEATURE_SYN_COLOR_CATALOG + 19),
   ERROR_SYN_COLOR_CATALOG_PURE_VIEW_OUTPUT_SPACE_IS_INVALID = (SYNCOLOR::FEATURE_SYN_COLOR_CATALOG + 20),
   ERROR_SYN_COLOR_CATALOG_UNKNOWN_USER_COLOR_SPACE = (SYNCOLOR::FEATURE_SYN_COLOR_CATALOG + 21),
   ERROR_SYN_COLOR_CATALOG_INVALID_COLOR_SPACE_TRANSFORM = (SYNCOLOR::FEATURE_SYN_COLOR_CATALOG + 22),
   ERROR_SYN_COLOR_CATALOG_INVALID_FRIENDLY_IMAGE_STATE = (SYNCOLOR::FEATURE_SYN_COLOR_CATALOG + 23),
   ERROR_SYN_COLOR_CATALOG_IMAGE_STATE_REQUIRED = (SYNCOLOR::FEATURE_SYN_COLOR_CATALOG + 24),
   ERROR_SYN_COLOR_RULES_INVALID_REGULAR_EXPRESSION = (SYNCOLOR::FEATURE_SYN_COLOR_RULES + 1),
   ERROR_SYN_COLOR_RULES_INVALID_POSITION = (SYNCOLOR::FEATURE_SYN_COLOR_RULES + 2),
   ERROR_SYN_COLOR_RULES_RULE_NAME_INVALID = (SYNCOLOR::FEATURE_SYN_COLOR_RULES + 3),
   ERROR_SYN_COLOR_RULES_INVALID_RULE = (SYNCOLOR::FEATURE_SYN_COLOR_RULES + 4),
   ERROR_SYN_COLOR_RULES_RULE_EXISTS = (SYNCOLOR::FEATURE_SYN_COLOR_RULES + 5),
   ERROR_SYN_COLOR_RULES_RULE_NOT_FOUND = (SYNCOLOR::FEATURE_SYN_COLOR_RULES + 6),
   ERROR_SYN_COLOR_RULES_RULE_COLOR_SPACE_INVALID = (SYNCOLOR::FEATURE_SYN_COLOR_RULES + 7),
   ERROR_SYN_COLOR_RULES_RULE_READ_ONLY = (SYNCOLOR::FEATURE_SYN_COLOR_RULES + 8),
   ERROR_SYN_COLOR_RULES_RESERVED_POSITION = (SYNCOLOR::FEATURE_SYN_COLOR_RULES + 9),
   ERROR_SYN_COLOR_RULES_READ_ONLY = (SYNCOLOR::FEATURE_SYN_COLOR_RULES + 10),
   ERROR_SYN_COLOR_RULES_OCIO_NOT_A_FILE = (SYNCOLOR::FEATURE_SYN_COLOR_RULES + 11),
   ERROR_SYN_COLOR_RULES_OCIO_GENERIC_ERROR = (SYNCOLOR::FEATURE_SYN_COLOR_RULES + 12),
   ERROR_SYN_COLOR_RULES_CANNOT_OPEN_FILE = (SYNCOLOR::FEATURE_SYN_COLOR_RULES + 13),
   ERROR_SYN_COLOR_RULES_FILE_PARSING_ERROR = (SYNCOLOR::FEATURE_SYN_COLOR_RULES + 14),
   ERROR_SYN_COLOR_RULES_NOT_A_FILE = (SYNCOLOR::FEATURE_SYN_COLOR_RULES + 15),
   ERROR_SYN_COLOR_RULES_EMPTY_STRING = (SYNCOLOR::FEATURE_SYN_COLOR_RULES + 16),
   ERROR_SYN_COLOR_RULES_CONTENT_TRUNCATED = (SYNCOLOR::FEATURE_SYN_COLOR_RULES + 17),
   ERROR_SYN_COLOR_RULES_NULL_FILE_EXTENSION = (SYNCOLOR::FEATURE_SYN_COLOR_RULES + 18),
   ERROR_SYN_COLOR_RULES_NULL_FILE_PATH_PATTERN = (SYNCOLOR::FEATURE_SYN_COLOR_RULES + 19),
   ERROR_SYN_COLOR_RULES_INVALID_CONTEXT = (SYNCOLOR::FEATURE_SYN_COLOR_RULES + 20),
   ERROR_SYN_COLOR_POLICIES_DIR_CREATE = (SYNCOLOR::FEATURE_SYN_COLOR_POLICIES + 1),
   ERROR_SYN_COLOR_POLICIES_DIR_OPEN = (SYNCOLOR::FEATURE_SYN_COLOR_POLICIES + 2),
   ERROR_SYN_COLOR_POLICIES_DIR_READ = (SYNCOLOR::FEATURE_SYN_COLOR_POLICIES + 3),
   ERROR_SYN_COLOR_POLICIES_FILE_WRITE = (SYNCOLOR::FEATURE_SYN_COLOR_POLICIES + 4),
   ERROR_SYN_COLOR_POLICIES_SET_PERM = (SYNCOLOR::FEATURE_SYN_COLOR_POLICIES + 5),
   ERROR_SYN_COLOR_POLICIES_COPY = (SYNCOLOR::FEATURE_SYN_COLOR_POLICIES + 6),
   ERROR_SYN_COLOR_POLICIES_ASSERTION = (SYNCOLOR::FEATURE_SYN_COLOR_POLICIES + 7),
   ERROR_SYN_COLOR_POLICIES_DIR_EXISTS = (SYNCOLOR::FEATURE_SYN_COLOR_POLICIES + 8),
   ERROR_SYN_COLOR_POLICIES_TEMP_NAME = (SYNCOLOR::FEATURE_SYN_COLOR_POLICIES + 9),
   ERROR_SYN_COLOR_POLICIES_STAT = (SYNCOLOR::FEATURE_SYN_COLOR_POLICIES + 10),
   ERROR_SYN_COLOR_POLICIES_LINK = (SYNCOLOR::FEATURE_SYN_COLOR_POLICIES + 11),
   ERROR_SYN_COLOR_POLICIES_RENAME = (SYNCOLOR::FEATURE_SYN_COLOR_POLICIES + 12),
   ERROR_SYN_COLOR_COLORSPACE_NONEXISTENT_COLOR_SPACE = (SYNCOLOR::FEATURE_SYN_COLOR_COLORSPACE + 1),
   ERROR_SYN_COLOR_COLORSPACE_MISSING_CHROMATICITY_COORDINATE = (SYNCOLOR::FEATURE_SYN_COLOR_COLORSPACE + 2),
   ERROR_SYN_COLOR_COLORSPACE_INVALID_COLOR_SPACE_TYPE = (SYNCOLOR::FEATURE_SYN_COLOR_COLORSPACE + 3),
  };
}

#endif
