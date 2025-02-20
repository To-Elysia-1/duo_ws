// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from auto_aim_interfaces:msg/DebugLight.idl
// generated code does not contain a copyright notice

#include "auto_aim_interfaces/msg/detail/debug_light__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_auto_aim_interfaces
const rosidl_type_hash_t *
auto_aim_interfaces__msg__DebugLight__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x09, 0x28, 0x40, 0x16, 0xda, 0x38, 0x05, 0x85,
      0x7f, 0x64, 0x51, 0xf6, 0xc8, 0xf2, 0x46, 0x02,
      0x2a, 0xe1, 0xfa, 0x15, 0xce, 0x3c, 0x30, 0xdc,
      0xfb, 0x4e, 0x2a, 0xb2, 0xa2, 0x3e, 0xdf, 0x99,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char auto_aim_interfaces__msg__DebugLight__TYPE_NAME[] = "auto_aim_interfaces/msg/DebugLight";

// Define type names, field names, and default values
static char auto_aim_interfaces__msg__DebugLight__FIELD_NAME__center_x[] = "center_x";
static char auto_aim_interfaces__msg__DebugLight__FIELD_NAME__is_light[] = "is_light";
static char auto_aim_interfaces__msg__DebugLight__FIELD_NAME__ratio[] = "ratio";
static char auto_aim_interfaces__msg__DebugLight__FIELD_NAME__angle[] = "angle";

static rosidl_runtime_c__type_description__Field auto_aim_interfaces__msg__DebugLight__FIELDS[] = {
  {
    {auto_aim_interfaces__msg__DebugLight__FIELD_NAME__center_x, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {auto_aim_interfaces__msg__DebugLight__FIELD_NAME__is_light, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {auto_aim_interfaces__msg__DebugLight__FIELD_NAME__ratio, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {auto_aim_interfaces__msg__DebugLight__FIELD_NAME__angle, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
auto_aim_interfaces__msg__DebugLight__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {auto_aim_interfaces__msg__DebugLight__TYPE_NAME, 34, 34},
      {auto_aim_interfaces__msg__DebugLight__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 center_x\n"
  "bool is_light\n"
  "float32 ratio\n"
  "float32 angle";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
auto_aim_interfaces__msg__DebugLight__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {auto_aim_interfaces__msg__DebugLight__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 56, 56},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
auto_aim_interfaces__msg__DebugLight__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *auto_aim_interfaces__msg__DebugLight__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
