<?php
/**
 * @file
 * gsb_feature_business_insight_ct.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function gsb_feature_business_insight_ct_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_additional_options|node|business_insight|form';
  $field_group->group_name = 'group_additional_options';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'business_insight';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Additional Options',
    'weight' => '6',
    'children' => array(
      0 => 'group_bi_authors',
      1 => 'group_bi_header_image',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_additional_options|node|business_insight|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bi_authors|node|business_insight|form';
  $field_group->group_name = 'group_bi_authors';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'business_insight';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_additional_options';
  $field_group->data = array(
    'label' => 'Authors',
    'weight' => '22',
    'children' => array(
      0 => 'field_person_fac_staff_other',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_bi_authors|node|business_insight|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bi_header_image|node|business_insight|form';
  $field_group->group_name = 'group_bi_header_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'business_insight';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_additional_options';
  $field_group->data = array(
    'label' => 'Header Image',
    'weight' => '24',
    'children' => array(
      0 => 'field_file_single_public',
      1 => 'field_header_image_style',
      2 => 'field_image_caption',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_bi_header_image|node|business_insight|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_taxonomy|node|business_insight|form';
  $field_group->group_name = 'group_taxonomy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'business_insight';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Taxonomy',
    'weight' => '10',
    'children' => array(
      0 => 'field_business_insight_topic',
      1 => 'field_company_organization',
      2 => 'field_discipline',
      3 => 'field_industry',
      4 => 'field_region',
      5 => 'field_tag',
      6 => 'field_target_audience',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_taxonomy|node|business_insight|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_teaser|node|business_insight|teaser';
  $field_group->group_name = 'group_wrapper_teaser';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'business_insight';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Teaser wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_date_published',
      1 => 'field_editorial_summary',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Teaser wrapper',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper_teaser|node|business_insight|teaser'] = $field_group;

  return $export;
}
