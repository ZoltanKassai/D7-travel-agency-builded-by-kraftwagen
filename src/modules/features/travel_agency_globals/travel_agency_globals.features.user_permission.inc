<?php
/**
 * @file
 * travel_agency_globals.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function travel_agency_globals_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'travel manager' => 'travel manager',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer registration'.
  $permissions['administer registration'] = array(
    'name' => 'administer registration',
    'roles' => array(
      'travel manager' => 'travel manager',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'travel manager' => 'travel manager',
    ),
    'module' => 'user',
  );

  // Exported permission: 'create travel content'.
  $permissions['create travel content'] = array(
    'name' => 'create travel content',
    'roles' => array(
      'travel manager' => 'travel manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create travel_booking registration'.
  $permissions['create travel_booking registration'] = array(
    'name' => 'create travel_booking registration',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'travel manager' => 'travel manager',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create travel_booking registration self'.
  $permissions['create travel_booking registration self'] = array(
    'name' => 'create travel_booking registration self',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete any travel content'.
  $permissions['delete any travel content'] = array(
    'name' => 'delete any travel content',
    'roles' => array(
      'travel manager' => 'travel manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any travel_booking registration'.
  $permissions['delete any travel_booking registration'] = array(
    'name' => 'delete any travel_booking registration',
    'roles' => array(
      'travel manager' => 'travel manager',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete own travel content'.
  $permissions['delete own travel content'] = array(
    'name' => 'delete own travel content',
    'roles' => array(
      'travel manager' => 'travel manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own travel_booking registration'.
  $permissions['delete own travel_booking registration'] = array(
    'name' => 'delete own travel_booking registration',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'edit any travel content'.
  $permissions['edit any travel content'] = array(
    'name' => 'edit any travel content',
    'roles' => array(
      'travel manager' => 'travel manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own travel content'.
  $permissions['edit own travel content'] = array(
    'name' => 'edit own travel content',
    'roles' => array(
      'travel manager' => 'travel manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'update any travel_booking registration'.
  $permissions['update any travel_booking registration'] = array(
    'name' => 'update any travel_booking registration',
    'roles' => array(
      'travel manager' => 'travel manager',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update own travel_booking registration'.
  $permissions['update own travel_booking registration'] = array(
    'name' => 'update own travel_booking registration',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view own travel_booking registration'.
  $permissions['view own travel_booking registration'] = array(
    'name' => 'view own travel_booking registration',
    'roles' => array(
      'authenticated user' => 'authenticated user',
      'travel manager' => 'travel manager',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view travel_booking registration'.
  $permissions['view travel_booking registration'] = array(
    'name' => 'view travel_booking registration',
    'roles' => array(
      'travel manager' => 'travel manager',
    ),
    'module' => 'registration',
  );

  return $permissions;
}
