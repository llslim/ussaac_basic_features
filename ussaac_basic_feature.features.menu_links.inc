<?php
/**
 * @file
 * ussaac_basic_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ussaac_basic_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about:node/14.
  $menu_links['main-menu_about:node/14'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/14',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_about:node/14',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_board-of-directors:node/15.
  $menu_links['main-menu_board-of-directors:node/15'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/15',
    'router_path' => 'node/%',
    'link_title' => 'Board of Directors',
    'options' => array(
      'identifier' => 'main-menu_board-of-directors:node/15',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:node/14',
  );
  // Exported menu link: main-menu_bylaws:node/19.
  $menu_links['main-menu_bylaws:node/19'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/19',
    'router_path' => 'node/%',
    'link_title' => 'Bylaws',
    'options' => array(
      'identifier' => 'main-menu_bylaws:node/19',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'main-menu_about:node/14',
  );
  // Exported menu link: main-menu_committees:node/16.
  $menu_links['main-menu_committees:node/16'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/16',
    'router_path' => 'node/%',
    'link_title' => 'Committees',
    'options' => array(
      'identifier' => 'main-menu_committees:node/16',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Exported menu link: main-menu_nominations:node/17.
  $menu_links['main-menu_nominations:node/17'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/17',
    'router_path' => 'node/%',
    'link_title' => 'Nominations',
    'options' => array(
      'identifier' => 'main-menu_nominations:node/17',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:node/14',
  );
  // Exported menu link: main-menu_presidents-message:node/18.
  $menu_links['main-menu_presidents-message:node/18'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/18',
    'router_path' => 'node/%',
    'link_title' => 'President\'s Message',
    'options' => array(
      'identifier' => 'main-menu_presidents-message:node/18',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:node/14',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Board of Directors');
  t('Bylaws');
  t('Committees');
  t('Nominations');
  t('President\'s Message');

  return $menu_links;
}
