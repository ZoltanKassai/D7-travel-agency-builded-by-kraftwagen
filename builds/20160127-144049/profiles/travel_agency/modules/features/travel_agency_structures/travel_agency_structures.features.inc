<?php
/**
 * @file
 * travel_agency_structures.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function travel_agency_structures_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
