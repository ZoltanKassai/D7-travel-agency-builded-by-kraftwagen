<?php
/**
 * @file
 * travel_agency_custom_content_types.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function travel_agency_custom_content_types_taxonomy_default_vocabularies() {
  return array(
    'destinations' => array(
      'name' => 'Destinations',
      'machine_name' => 'destinations',
      'description' => 'Storing the destinations of the leisure',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
