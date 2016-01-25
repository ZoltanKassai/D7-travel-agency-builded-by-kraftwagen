<?php
/**
 * @file
 * travel_agency_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function travel_agency_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_customers:customers.
  $menu_links['main-menu_customers:customers'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'customers',
    'router_path' => 'customers',
    'link_title' => 'Customers',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'customers',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_customers:customers',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_dashboard:dashboard.
  $menu_links['main-menu_dashboard:dashboard'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'dashboard',
    'router_path' => 'dashboard',
    'link_title' => 'Dashboard',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'dashboard',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_dashboard:dashboard',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_travels:travels.
  $menu_links['main-menu_travels:travels'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'travels',
    'router_path' => 'travels',
    'link_title' => 'Travels',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'travels',
        ),
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_travels:travels',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-travel-manager_add-customer:admin/people/create.
  $menu_links['menu-travel-manager_add-customer:admin/people/create'] = array(
    'menu_name' => 'menu-travel-manager',
    'link_path' => 'admin/people/create',
    'router_path' => 'admin/people/create',
    'link_title' => 'Add customer',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-travel-manager_add-customer:admin/people/create',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-travel-manager_add-travel:node/add/travel.
  $menu_links['menu-travel-manager_add-travel:node/add/travel'] = array(
    'menu_name' => 'menu-travel-manager',
    'link_path' => 'node/add/travel',
    'router_path' => 'node/add/travel',
    'link_title' => 'Add travel',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-travel-manager_add-travel:node/add/travel',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-travel-manager_logout:user/logout.
  $menu_links['menu-travel-manager_logout:user/logout'] = array(
    'menu_name' => 'menu-travel-manager',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Logout',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-travel-manager_logout:user/logout',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add customer');
  t('Add travel');
  t('Customers');
  t('Dashboard');
  t('Logout');
  t('Travels');

  return $menu_links;
}
