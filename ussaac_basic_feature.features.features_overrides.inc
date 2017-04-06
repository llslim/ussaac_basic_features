<?php
/**
 * @file
 * ussaac_basic_feature.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ussaac_basic_feature_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: user_permission
  $overrides["user_permission.access user profiles.roles|anonymous user"] = 'anonymous user';

 return $overrides;
}
