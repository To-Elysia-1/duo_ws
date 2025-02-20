// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from auto_aim_interfaces:msg/DebugLights.idl
// generated code does not contain a copyright notice

#include "auto_aim_interfaces/msg/detail/debug_lights__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_auto_aim_interfaces
const rosidl_type_hash_t *
auto_aim_interfaces__msg__DebugLights__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3d, 0xbf, 0x46, 0xb8, 0x59, 0x3e, 0xb1, 0x4c,
      0x11, 0x47, 0x54, 0x15, 0x9f, 0xd5, 0x2e, 0xe1,
      0x19, 0x34, 0x5d, 0xb9, 0x96, 0x24, 0xab, 0x31,
      0xb1, 0x4e, 0xd6, 0x2d, 0xb6, 0x6e, 0x07, 0x28,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "auto_aim_interfaces/msg/detail/debug_light__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t auto_aim_interfaces__msg__DebugLight__EXPECTED_HASH = {1, {
    0x09, 0x28, 0x40, 0x16, 0xda, 0x38, 0x05, 0x85,
    0x7f, 0x64, 0x51, 0xf6, 0xc8, 0xf2, 0x46, 0x02,
    0x2a, 0xe1, 0xfa, 0x15, 0xce, 0x3c, 0x30, 0xdc,
    0xfb, 0x4e, 0x2a, 0xb2, 0xa2, 0x3e, 0xdf, 0x99,
  }};
#endif

static char auto_aim_interfaces__msg__DebugLights__TYPE_NAME[] = "auto_aim_interfaces/msg/DebugLights";
static char auto_aim_interfaces__msg__DebugLight__TYPE_NAME[] = "auto_aim_interfaces/msg/DebugLight";

// Define type names, field names, and default values
static char auto_aim_interfaces__msg__DebugLights__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field auto_aim_interfaces__msg__DebugLights__FIELDS[] = {
  {
    {auto_aim_interfaces__msg__DebugLights__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {auto_aim_interfaces__msg__DebugLight__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription auto_aim_interfaces__msg__DebugLights__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {auto_aim_interfaces__msg__DebugLight__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
auto_aim_interfaces__msg__DebugLights__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {auto_aim_interfaces__msg__DebugLights__TYPE_NAME, 35, 35},
      {auto_aim_interfaces__msg__DebugLights__FIELDS, 1, 1},
    },
    {auto_aim_interfaces__msg__DebugLights__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&auto_aim_interfaces__msg__DebugLight__EXPECTED_HASH, auto_aim_interfaces__msg__DebugLight__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = auto_aim_interfaces__msg__DebugLight__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "DebugLight[] data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
auto_aim_interfaces__msg__DebugLights__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {auto_aim_interfaces__msg__DebugLights__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 17, 17},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
auto_aim_interfaces__msg__DebugLights__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *auto_aim_interfaces__msg__DebugLights__get_individual_type_description_source(NULL),
    sources[1] = *auto_aim_interfaces__msg__DebugLight__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
