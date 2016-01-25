<?php
/**
 * @file
 * travel_agency_custom_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function travel_agency_custom_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "fieldable_panels_panes" && $api == "fieldable_panels_pane_type") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function travel_agency_custom_content_types_node_info() {
  $items = array(
    'travel' => array(
      'name' => t('Travel'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Travel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_registration_state().
 */
function travel_agency_custom_content_types_default_registration_state() {
  $items = array();
  $items['canceled'] = entity_import('registration_state', '{
    "name" : "canceled",
    "label" : "Canceled",
    "description" : "Registration was cancelled",
    "default_state" : "0",
    "active" : "0",
    "held" : "0",
    "show_on_form" : "0",
    "weight" : "1"
  }');
  $items['complete'] = entity_import('registration_state', '{
    "name" : "complete",
    "label" : "Complete",
    "description" : "Registration has been completed.",
    "default_state" : "1",
    "active" : "1",
    "held" : "0",
    "show_on_form" : "0",
    "weight" : "1"
  }');
  $items['held'] = entity_import('registration_state', '{
    "name" : "held",
    "label" : "Held",
    "description" : "Registration is held.",
    "default_state" : "0",
    "active" : "0",
    "held" : "1",
    "show_on_form" : "0",
    "weight" : "1"
  }');
  $items['pending'] = entity_import('registration_state', '{
    "name" : "pending",
    "label" : "Pending",
    "description" : "Registration is pending.",
    "default_state" : "0",
    "active" : "0",
    "held" : "0",
    "show_on_form" : "0",
    "weight" : "1"
  }');
  return $items;
}

/**
 * Implements hook_default_registration_type().
 */
function travel_agency_custom_content_types_default_registration_type() {
  $items = array();
  $items['travel_booking'] = entity_import('registration_type', '{
    "name" : "travel_booking",
    "label" : "Travel Booking",
    "locked" : "0",
    "default_state" : null,
    "data" : null,
    "weight" : "0"
  }');
  return $items;
}
