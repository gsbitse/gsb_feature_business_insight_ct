<?php
/**
 * @file
 * gsb_feature_business_insight_ct.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_business_insight_ct_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function gsb_feature_business_insight_ct_node_info() {
  $items = array(
    'business_insight' => array(
      'name' => t('Business Insight'),
      'base' => 'node_content',
      'description' => t('The GSB Public Business Insight content type is used for business insights on the GSB Public web site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
