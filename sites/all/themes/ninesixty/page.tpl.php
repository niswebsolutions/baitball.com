<?php
// $Id: page.tpl.php,v 1.1.2.2.4.2 2011/01/11 01:08:49 dvessel Exp $
?>

<div id="background">

<div id="page">

 <div class="container-16 clearfix">
  <div id="site-header" class="clearfix">
    <div id="branding" class="grid-4 clearfix">
    <?php if ($linked_logo_img): ?>
      <div id="logo"><?php print $linked_logo_img; ?></div>
    <?php endif; ?>
    <?php if ($linked_site_name): ?>
      <h1 id="site-name" class="grid-3 omega"><?php print $linked_site_name; ?></h1>
    <?php endif; ?>
    <?php if ($site_slogan): ?>
      <div id="site-slogan" class="grid-3 omega"><?php print $site_slogan; ?></div>
    <?php endif; ?>
    <?php if ($page['header']): ?>
      <div id="header-region" class="region <?php print ns('grid-16', $page['highlighted'], 7); ?> clearfix">
        <?php print render($page['header']); ?>
      </div>
  	<?php endif; ?>
    </div>

  <?php if ($main_menu_links || $secondary_menu_links): ?>
    <div id="site-menu" class="grid-12">
      <?php print $main_menu_links; ?>
      <?php print $secondary_menu_links; ?>
    </div>
  <?php endif; ?>

  <?php if ($page['search_box']): ?>
    <div id="search-box" class="grid-6 prefix-10"><?php print render($page['search_box']); ?></div>
  <?php endif; ?>
  
  </div>
  
  <div id="navigation">
  	<?php print render($page['navigation']); ?>
  </div>
 </div><!-- /container -->
  
  <?php if ($page['banner']): ?>
  	<div id="banner"><div class="wrapper"><div class="stretch">
  	 <?php print render($page['banner']); ?>
  	</div></div></div>
  <?php endif; ?>
  
<div class="container-16 clearfix">
 <div id="content-area" class="clearfix">
  <div id="main" class="column <?php print ns('grid-16', $page['sidebar_first'], 3, $page['sidebar_second'], 5) . ' ' . ns('push-3', !$page['sidebar_first'], 4); ?>">
    <?php print $breadcrumb; ?>
    <?php print render($title_prefix); ?>
    <?php if ($title): ?>
      <h1 class="title" id="page-title"><?php print $title; ?></h1>
    <?php endif; ?>
    <?php print render($title_suffix); ?>      
    <?php if ($tabs): ?>
      <div class="tabs"><?php print render($tabs); ?></div>
    <?php endif; ?>
    <?php print $messages; ?>
    <?php print render($page['help']); ?>

    <div id="main-content" class="region clearfix">
      <?php print render($page['content']); ?>
    </div>

    <?php print $feed_icons; ?>
  </div>

<?php if ($page['sidebar_first']): ?>
  <div id="sidebar-left" class="column sidebar region grid-3 <?php print ns('pull-13', $page['sidebar_second'], 5); ?>">
    <?php print render($page['sidebar_first']); ?>
  </div>
<?php endif; ?>

<?php if ($page['sidebar_second']): ?>
  <div id="sidebar-right" class="column sidebar region grid-5">
    <?php print render($page['sidebar_second']); ?>
  </div>
<?php endif; ?>
 </div><!-- /content-area -->	
</div><!-- /container -->
</div>

  <div id="footer" class="clearfix">
    <?php if ($page['footer']): ?>
      <div id="footer-region" class="region container-16">
        <?php print render($page['footer']); ?>
        <div class="logo"></div>
      </div>
    <?php endif; ?>
  </div>

</div><!-- Background -->
