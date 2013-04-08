<?php
/**
 * @file
 * gsb_feature_business_insight_ct.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function gsb_feature_business_insight_ct_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|business_insight|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'business_insight';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '3',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|business_insight|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function gsb_feature_business_insight_ct_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|business_insight|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'business_insight';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_file_single_public',
        1 => 'group_wrapper_teaser',
        2 => 'field_date_published',
        3 => 'title',
        4 => 'field_editorial_summary',
      ),
    ),
    'fields' => array(
      'field_file_single_public' => 'ds_content',
      'group_wrapper_teaser' => 'ds_content',
      'field_date_published' => 'ds_content',
      'title' => 'ds_content',
      'field_editorial_summary' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
  );
  $export['node|business_insight|teaser'] = $ds_layout;

  return $export;
}
