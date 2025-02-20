// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from auto_aim_interfaces:msg/DebugArmor.idl
// generated code does not contain a copyright notice

#include "auto_aim_interfaces/msg/detail/debug_armor__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_auto_aim_interfaces
const rosidl_type_hash_t *
auto_aim_interfaces__msg__DebugArmor__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1c, 0xde, 0xed, 0xb3, 0xab, 0xff, 0xc7, 0x04,
      0xf9, 0xe4, 0xc1, 0xd8, 0x03, 0x00, 0xa6, 0x2b,
      0x3f, 0xe5, 0xd4, 0xcb, 0x4d, 0x91, 0x76, 0x19,
      0xa7, 0xee, 0xf5, 0x16, 0x76, 0x35, 0xec, 0xed,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char auto_aim_interfaces__msg__DebugArmor__TYPE_NAME[] = "auto_aim_interfaces/msg/DebugArmor";

// Define type names, field names, and default values
static char auto_aim_interfaces__msg__DebugArmor__FIELD_NAME__center_x[] = "center_x";
static char auto_aim_interfaces__msg__DebugArmor__FIELD_NAME__type[] = "type";
static char auto_aim_interfaces__msg__DebugArmor__FIELD_NAME__light_ratio[] = "light_ratio";
static char auto_aim_interfaces__msg__DebugArmor__FIELD_NAME__center_distance[] = "center_distance";
static char auto_aim_interfaces__msg__DebugArmor__FIELD_NAME__angle[] = "angle";

static rosidl_runtime_c__type_description__Field auto_aim_interfaces__msg__DebugArmor__FIELDS[] = {
  {
    {auto_aim_interfaces__msg__DebugArmor__FIELD_NAME__center_x, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {auto_aim_interfaces__msg__DebugArmor__FIELD_NAME__type, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {auto_aim_interfaces__msg__DebugArmor__FIELD_NAME__light_ratio, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {auto_aim_interfaces__msg__DebugArmor__FIELD_NAME__center_distance, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {auto_aim_interfaces__msg__DebugArmor__FIELD_NAME__angle, 5, 5},
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
auto_aim_interfaces__msg__DebugArmor__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {auto_aim_interfaces__msg__DebugArmor__TYPE_NAME, 34, 34},
      {auto_aim_interfaces__msg__DebugArmor__FIELDS, 5, 5},
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
  "string type\n"
  "float32 light_ratio\n"
  "float32 center_distance\n"
  "float32 angle";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
auto_aim_interfaces__msg__DebugArmor__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {auto_aim_interfaces__msg__DebugArmor__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 85, 85},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
auto_aim_interfaces__msg__DebugArmor__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *auto_aim_interfaces__msg__DebugArmor__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
