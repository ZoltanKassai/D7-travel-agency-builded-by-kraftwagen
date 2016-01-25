<?php
/**
 * @file
 * travel_agency_custom_content_types.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function travel_agency_custom_content_types_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_travel';
  $strongarm->value = 'edit-panelizer';
  $export['additional_settings__active_tab_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__customer';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__customer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__travel';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'locations' => array(
          'weight' => '5',
        ),
        'title' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_registration__travel_booking';
  $strongarm->value = array(
    'view_modes' => array(
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'who_is_registering' => array(
          'weight' => '0',
        ),
        'anon_mail' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(
        'mail' => array(
          'default' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
        ),
        'host_entity_link' => array(
          'default' => array(
            'weight' => '0',
            'visible' => TRUE,
          ),
        ),
        'created' => array(
          'default' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
        ),
        'updated' => array(
          'default' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
        ),
        'spaces' => array(
          'default' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
        ),
        'author' => array(
          'default' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
        ),
        'user' => array(
          'default' => array(
            'weight' => '6',
            'visible' => TRUE,
          ),
        ),
        'state' => array(
          'default' => array(
            'weight' => '7',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_registration__travel_booking'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_defaultnum_travel';
  $strongarm->value = '1';
  $export['location_defaultnum_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_maxnum_travel';
  $strongarm->value = '1';
  $export['location_maxnum_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'location_settings_node_travel';
  $strongarm->value = array(
    'multiple' => array(
      'min' => '1',
      'max' => '1',
      'add' => '1',
      'location_addanother' => 0,
    ),
    'form' => array(
      'weight' => '0',
      'collapsible' => 0,
      'collapsed' => 0,
      'fields' => array(
        'country' => array(
          'collect' => '1',
          'default' => 'us',
          'weight' => '-100',
        ),
        'province' => array(
          'collect' => '1',
          'widget' => 'autocomplete',
          'default' => '',
          'weight' => '-99',
        ),
        'city' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '-98',
        ),
        'street' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '-97',
        ),
        'postal_code' => array(
          'collect' => '1',
          'default' => '',
          'weight' => '-96',
        ),
        'locpick' => array(
          'collect' => '1',
          'weight' => '-95',
        ),
        'name' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '-94',
        ),
        'additional' => array(
          'collect' => '0',
          'default' => '',
          'weight' => '-93',
        ),
      ),
    ),
    'display' => array(
      'weight' => '-2',
      'hide' => array(
        'name' => 'name',
        'additional' => 'additional',
        'street' => 0,
        'city' => 0,
        'province' => 0,
        'postal_code' => 0,
        'country' => 0,
        'locpick' => 0,
        'province_name' => 0,
        'country_name' => 0,
        'map_link' => 0,
        'coords' => 0,
      ),
      'teaser' => 1,
      'full' => 1,
    ),
    'rss' => array(
      'mode' => 'simple',
    ),
  );
  $export['location_settings_node_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_travel';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_travel';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_customer';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_customer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_travel';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_customer';
  $strongarm->value = '1';
  $export['node_preview_customer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_travel';
  $strongarm->value = '1';
  $export['node_preview_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_customer';
  $strongarm->value = 1;
  $export['node_submitted_customer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_travel';
  $strongarm->value = 0;
  $export['node_submitted_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'panelizer_defaults_node_travel';
  $strongarm->value = array(
    'status' => 1,
    'view modes' => array(
      'page_manager' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'default' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
      'teaser' => array(
        'status' => 1,
        'default' => 1,
        'choice' => 0,
      ),
    ),
  );
  $export['panelizer_defaults_node_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'save_continue_travel';
  $strongarm->value = 'Save and add fields';
  $export['save_continue_travel'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_frontpage';
  $strongarm->value = 'home';
  $export['site_frontpage'] = $strongarm;

  return $export;
}
