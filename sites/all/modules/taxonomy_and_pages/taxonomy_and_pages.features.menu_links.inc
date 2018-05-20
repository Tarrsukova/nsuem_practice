<?php
/**
 * @file
 * taxonomy_and_pages.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function taxonomy_and_pages_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_-:node/2.
  $menu_links['main-menu_-:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'О проекте',
    'options' => array(
      'identifier' => 'main-menu_-:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_:node/1',
  );
  // Exported menu link: main-menu_-:node/9.
  $menu_links['main-menu_-:node/9'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/9',
    'router_path' => 'node/%',
    'link_title' => 'Организация практики',
    'options' => array(
      'identifier' => 'main-menu_-:node/9',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 3,
    'customized' => 0,
  );
  // Exported menu link: main-menu_:node/1.
  $menu_links['main-menu_:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Практика',
    'options' => array(
      'identifier' => 'main-menu_:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_:node/5.
  $menu_links['main-menu_:node/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/5',
    'router_path' => 'node/%',
    'link_title' => 'Официально',
    'options' => array(
      'identifier' => 'main-menu_:node/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 1,
    'customized' => 0,
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Home');
  t('О проекте');
  t('Организация практики');
  t('Официально');
  t('Практика');

  return $menu_links;
}
