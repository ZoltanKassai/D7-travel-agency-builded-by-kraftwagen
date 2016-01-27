<?php
/**
 * @file
 * travel_agency_globals.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function travel_agency_globals_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 3,
  );

  // Exported role: travel manager.
  $roles['travel manager'] = array(
    'name' => 'travel manager',
    'weight' => 2,
  );

  return $roles;
}
