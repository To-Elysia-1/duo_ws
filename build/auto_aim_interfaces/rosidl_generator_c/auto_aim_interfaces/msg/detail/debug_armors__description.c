// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from auto_aim_interfaces:msg/DebugArmors.idl
// generated code does not contain a copyright notice

#include "auto_aim_interfaces/msg/detail/debug_armors__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_auto_aim_interfaces
const rosidl_type_hash_t *
auto_aim_interfaces__msg__DebugArmors__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc9, 0xc7, 0x56, 0xda, 0xce, 0x89, 0xb0, 0xaa,
      0x65, 0xf9, 0x2c, 0xc4, 0xd4, 0x31, 0x6c, 0x8b,
      0xe0, 0x72, 0x5e, 0x15, 0xb5, 0x39, 0x9b, 0x59,
      0x71, 0x97, 0x71, 0x66, 0xa7, 0xdb, 0x26, 0x75,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "auto_aim_interfaces/msg/detail/debug_armor__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t auto_aim_interfaces__msg__DebugArmor__EXPECTED_HASH = {1, {
    0x1c, 0xde, 0xed, 0xb3, 0xab, 0xff, 0xc7, 0x04,
    0xf9, 0xe4, 0xc1, 0xd8, 0x03, 0x00, 0xa6, 0x2b,
    0x3f, 0xe5, 0xd4, 0xcb, 0x4d, 0x91, 0x76, 0x19,
    0xa7, 0xee, 0xf5, 0x16, 0x76, 0x35, 0xec, 0xed,
  }};
#endif

static char auto_aim_interfaces__msg__DebugArmors__TYPE_NAME[] = "auto_aim_interfaces/msg/DebugArmors";
static char auto_aim_interfaces__msg__DebugArmor__TYPE_NAME[] = "auto_aim_interfaces/msg/DebugArmor";

// Define type names, field names, and default values
static char auto_aim_interfaces__msg__DebugArmors__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field auto_aim_interfaces__msg__DebugArmors__FIELDS[] = {
  {
    {auto_aim_interfaces__msg__DebugArmors__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {auto_aim_interfaces__msg__DebugArmor__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription auto_aim_interfaces__msg__DebugArmors__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {auto_aim_interfaces__msg__DebugArmor__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
auto_aim_interfaces__msg__DebugArmors__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {auto_aim_interfaces__msg__DebugArmors__TYPE_NAME, 35, 35},
      {auto_aim_interfaces__msg__DebugArmors__FIELDS, 1, 1},
    },
    {auto_aim_interfaces__msg__DebugArmors__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&auto_aim_interfaces__msg__DebugArmor__EXPECTED_HASH, auto_aim_interfaces__msg__DebugArmor__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = auto_aim_interfaces__msg__DebugArmor__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "DebugArmor[] data";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
auto_aim_interfaces__msg__DebugArmors__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {auto_aim_interfaces__msg__DebugArmors__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 17, 17},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
auto_aim_interfaces__msg__DebugArmors__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *auto_aim_interfaces__msg__DebugArmors__get_individual_type_description_source(NULL),
    sources[1] = *auto_aim_interfaces__msg__DebugArmor__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
