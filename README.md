Gallery Drupal Feature
=======================

This is a simple feature wich contains gallery.

HOWTO USE
---------

### Make a new Drupal installation with gallery feature:

* `drush make https://raw.github.com/tanarurkerem/tanarurkerem_gallery/master/build.make [WEBDIR]`
* Install Drupal (`drush si [YOUR OPTIONS]`)
* Enable Features module (`drush en -y features`)
* Enable Tanarurkerem gallery feature at admin/structure/features (`drush en -y tanarurkerem_gallery`)

### Install Tanarurkerem gallery feature to an existing site

* `drush make --no-core --tar https://github.com/tanarurkerem/tanarurkerem_gallery/raw/master/build.make tanarurkerem_gallery`
* Mac OSX - bsdtar 2.8.3 - libarchive 2.8.3

 `tar -x -s /tanarurkerem_gallery// -C [YOUR DRUPAL WEB DIR] < tanarurkerem_gallery.tar.gz`

* Ubuntu - (GNU tar) 1.25

 `tar -x -z --xform s/tanarurkerem_gallery// -C [YOUR DRUPAL WEB DIR] < ./tanarurkerem_gallery.tar.gz`

### Use it in a .make file

* add a following lines to your make file:

```
projects[tanarurkerem_gallery][type] = module
projects[tanarurkerem_gallery][subdir] = features
projects[tanarurkerem_gallery][download][type] = git
projects[tanarurkerem_gallery][download][url] = git://github.com/tanarurkerem/tanarurkerem_gallery.git
```
