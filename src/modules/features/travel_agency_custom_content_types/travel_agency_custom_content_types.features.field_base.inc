<?php
/**
 * @file
 * travel_agency_custom_content_types.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function travel_agency_custom_content_types_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_registration'.
  $field_bases['field_registration'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_registration',
    'indexes' => array(
      'registration_type' => array(
        0 => 'registration_type',
      ),
    ),
    'locked' => 0,
    'module' => 'registration',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'registration',
  );

  // Exported field_base: 'field_telephone_number'.
  $field_bases['field_telephone_number'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_telephone_number',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
