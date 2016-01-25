<?php
/**
 * @file
 * travel_agency_structures.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function travel_agency_structures_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'customers';
  $page->task = 'page';
  $page->admin_title = 'Customers';
  $page->admin_description = '';
  $page->path = 'customers';
  $page->access = array(
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_customers__panel';
  $handler->task = 'page';
  $handler->subtask = 'customers';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Customers',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f55c04b7-33c9-4314-923e-30473bac12f3';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b3f35518-eb4b-4191-a873-b1f400354f8c';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'customers-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b3f35518-eb4b-4191-a873-b1f400354f8c';
    $display->content['new-b3f35518-eb4b-4191-a873-b1f400354f8c'] = $pane;
    $display->panels['center'][0] = 'new-b3f35518-eb4b-4191-a873-b1f400354f8c';
    $pane = new stdClass();
    $pane->pid = 'new-1be9446e-fa17-42bc-888d-66f957bdbb24';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-travel-manager';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1be9446e-fa17-42bc-888d-66f957bdbb24';
    $display->content['new-1be9446e-fa17-42bc-888d-66f957bdbb24'] = $pane;
    $display->panels['center'][1] = 'new-1be9446e-fa17-42bc-888d-66f957bdbb24';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['customers'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dashboard';
  $page->task = 'page';
  $page->admin_title = 'Dashboard';
  $page->admin_description = '';
  $page->path = 'dashboard';
  $page->access = array(
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_dashboard__panel';
  $handler->task = 'page';
  $handler->subtask = 'dashboard';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Dashboard',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '89ca2574-84e4-43f0-8341-c74af08b7f0e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-534d480f-2db7-424e-95c9-f4b80bfa6c60';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'registrations-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '534d480f-2db7-424e-95c9-f4b80bfa6c60';
    $display->content['new-534d480f-2db7-424e-95c9-f4b80bfa6c60'] = $pane;
    $display->panels['center'][0] = 'new-534d480f-2db7-424e-95c9-f4b80bfa6c60';
    $pane = new stdClass();
    $pane->pid = 'new-7c33ca0f-0f37-421e-9665-ed0a3af0a5a4';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'registrations-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7c33ca0f-0f37-421e-9665-ed0a3af0a5a4';
    $display->content['new-7c33ca0f-0f37-421e-9665-ed0a3af0a5a4'] = $pane;
    $display->panels['center'][1] = 'new-7c33ca0f-0f37-421e-9665-ed0a3af0a5a4';
    $pane = new stdClass();
    $pane->pid = 'new-db01f4af-db95-4742-a69b-5b93e38343f8';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-travel-manager';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'db01f4af-db95-4742-a69b-5b93e38343f8';
    $display->content['new-db01f4af-db95-4742-a69b-5b93e38343f8'] = $pane;
    $display->panels['center'][2] = 'new-db01f4af-db95-4742-a69b-5b93e38343f8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dashboard'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'frontpage';
  $page->task = 'page';
  $page->admin_title = 'Frontpage';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array(
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_frontpage__panel';
  $handler->task = 'page';
  $handler->subtask = 'frontpage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '840b2069-4b8c-471c-b53f-f74aa1d387fc';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cae77fcd-0f83-47f6-8d2c-b3e713d47dcc';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'system-main-menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'div',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cae77fcd-0f83-47f6-8d2c-b3e713d47dcc';
    $display->content['new-cae77fcd-0f83-47f6-8d2c-b3e713d47dcc'] = $pane;
    $display->panels['center'][0] = 'new-cae77fcd-0f83-47f6-8d2c-b3e713d47dcc';
    $pane = new stdClass();
    $pane->pid = 'new-586c28a8-8932-4ab3-9eca-6b5d77d0c459';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-travel-manager';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '586c28a8-8932-4ab3-9eca-6b5d77d0c459';
    $display->content['new-586c28a8-8932-4ab3-9eca-6b5d77d0c459'] = $pane;
    $display->panels['center'][1] = 'new-586c28a8-8932-4ab3-9eca-6b5d77d0c459';
    $pane = new stdClass();
    $pane->pid = 'new-e5a54c7a-00dd-4599-ba32-8e543301b79a';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'user-login';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Register first',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'e5a54c7a-00dd-4599-ba32-8e543301b79a';
    $display->content['new-e5a54c7a-00dd-4599-ba32-8e543301b79a'] = $pane;
    $display->panels['center'][2] = 'new-e5a54c7a-00dd-4599-ba32-8e543301b79a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-e5a54c7a-00dd-4599-ba32-8e543301b79a';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['frontpage'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'travels';
  $page->task = 'page';
  $page->admin_title = 'Travels';
  $page->admin_description = '';
  $page->path = 'travels';
  $page->access = array(
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_travels__panel';
  $handler->task = 'page';
  $handler->subtask = 'travels';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Travels',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c78377b8-6e0b-4113-ad16-2fc986163615';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d0b444e6-8255-45cd-a4ce-73af4eeec57b';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'travels-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd0b444e6-8255-45cd-a4ce-73af4eeec57b';
    $display->content['new-d0b444e6-8255-45cd-a4ce-73af4eeec57b'] = $pane;
    $display->panels['center'][0] = 'new-d0b444e6-8255-45cd-a4ce-73af4eeec57b';
    $pane = new stdClass();
    $pane->pid = 'new-61ecc9ab-df60-4c3c-845b-403e2702a719';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'menu-menu-travel-manager';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '61ecc9ab-df60-4c3c-845b-403e2702a719';
    $display->content['new-61ecc9ab-df60-4c3c-845b-403e2702a719'] = $pane;
    $display->panels['center'][1] = 'new-61ecc9ab-df60-4c3c-845b-403e2702a719';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['travels'] = $page;

  return $pages;

}
