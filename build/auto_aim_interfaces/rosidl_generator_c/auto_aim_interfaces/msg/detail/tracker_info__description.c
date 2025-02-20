// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from auto_aim_interfaces:msg/TrackerInfo.idl
// generated code does not contain a copyright notice

#include "auto_aim_interfaces/msg/detail/tracker_info__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_auto_aim_interfaces
const rosidl_type_hash_t *
auto_aim_interfaces__msg__TrackerInfo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x92, 0x3b, 0xc6, 0xf5, 0x10, 0x16, 0xd4, 0x7a,
      0x86, 0x70, 0x33, 0xa7, 0xf7, 0x39, 0x83, 0xfa,
      0xa5, 0x8f, 0xf1, 0x3a, 0xd9, 0xab, 0x5f, 0x52,
      0xc6, 0x0c, 0xe1, 0xea, 0xc7, 0xba, 0xbc, 0xed,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/point__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
#endif

static char auto_aim_interfaces__msg__TrackerInfo__TYPE_NAME[] = "auto_aim_interfaces/msg/TrackerInfo";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";

// Define type names, field names, and default values
static char auto_aim_interfaces__msg__TrackerInfo__FIELD_NAME__position_diff[] = "position_diff";
static char auto_aim_interfaces__msg__TrackerInfo__FIELD_NAME__yaw_diff[] = "yaw_diff";
static char auto_aim_interfaces__msg__TrackerInfo__FIELD_NAME__position[] = "position";
static char auto_aim_interfaces__msg__TrackerInfo__FIELD_NAME__yaw[] = "yaw";

static rosidl_runtime_c__type_description__Field auto_aim_interfaces__msg__TrackerInfo__FIELDS[] = {
  {
    {auto_aim_interfaces__msg__TrackerInfo__FIELD_NAME__position_diff, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {auto_aim_interfaces__msg__TrackerInfo__FIELD_NAME__yaw_diff, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {auto_aim_interfaces__msg__TrackerInfo__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
  {
    {auto_aim_interfaces__msg__TrackerInfo__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription auto_aim_interfaces__msg__TrackerInfo__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
auto_aim_interfaces__msg__TrackerInfo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {auto_aim_interfaces__msg__TrackerInfo__TYPE_NAME, 35, 35},
      {auto_aim_interfaces__msg__TrackerInfo__FIELDS, 4, 4},
    },
    {auto_aim_interfaces__msg__TrackerInfo__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Difference between the current measurement and prediction\n"
  "float64 position_diff\n"
  "float64 yaw_diff\n"
  "# Unfiltered position and yaw\n"
  "geometry_msgs/Point position\n"
  "float64 yaw";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
auto_aim_interfaces__msg__TrackerInfo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {auto_aim_interfaces__msg__TrackerInfo__TYPE_NAME, 35, 35},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 170, 170},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
auto_aim_interfaces__msg__TrackerInfo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *auto_aim_interfaces__msg__TrackerInfo__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
