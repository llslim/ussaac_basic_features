<?php
/**
 * @file
 * ussaac_basic_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ussaac_basic_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ussaac_basic_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_user_default_permissions_alter().
 */
function ussaac_basic_feature_user_default_permissions_alter(&$data) {
  if (isset($data['access user profiles'])) {
    $data['access user profiles']['roles']['anonymous user'] = 'anonymous user'; /* WAS: '' */
  }
}
