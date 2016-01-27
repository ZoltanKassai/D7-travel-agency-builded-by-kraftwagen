<?php
/**
 * @file
 * travel_agency_custom_content_types.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function travel_agency_custom_content_types_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-travel-field_registration'.
  $field_instances['node-travel-field_registration'] = array(
    'bundle' => 'travel',
    'default_value' => array(
      0 => array(
        'registration_type' => 'travel_booking',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'registration',
        'settings' => array(
          'i18n_string_key' => 'node:travel:default:field_registration',
          'label' => 'Register',
        ),
        'type' => 'registration_link',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'registration',
        'settings' => array(
          'i18n_string_key' => 'node:travel:teaser:field_registration',
          'label' => 'Registration',
        ),
        'type' => 'registration_link',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_registration',
    'label' => 'Registration',
    'required' => 1,
    'settings' => array(
      'default_registration_settings' => array(
        'capacity' => 25,
        'reminder' => array(
          'reminder_settings' => array(
            'reminder_date' => NULL,
            'reminder_template' => '',
          ),
          'send_reminder' => 0,
        ),
        'scheduling' => array(
          'close' => '2015-12-31 01:52:42',
          'open' => '2015-12-17 15:52:38',
        ),
        'settings' => array(
          'confirmation' => 'Registration has been saved.',
          'confirmation_redirect' => '',
          'from_address' => 'admin@example.com',
          'maximum_spaces' => 0,
          'multiple_registrations' => 0,
        ),
        'status' => 1,
      ),
      'hide_register_tab' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'registration',
      'settings' => array(),
      'type' => 'registration_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'user-user-field_telephone_number'.
  $field_instances['user-user-field_telephone_number'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_telephone_number',
    'label' => 'Telephone number',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Registration');
  t('Telephone number');

  return $field_instances;
}
