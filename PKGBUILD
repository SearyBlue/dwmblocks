pkgname=dwmblocks-kirito
gitname=dwmblocks
pkgver=0.8.2
pkgrel=1
pkgdesc='Modular Statusbar for DWM'
arch=('x86_64')
#makedepends=('ncurses' 'libxext' 'git')
source=('git+https://github.com/SearyBlue/dwmblocks')
sha1sums=('SKIP')
provides=('dwmblocks')
conflicts=('dwmblocks')

build() 
{
	cd "$srcdir/$gitname"
	cat /home/kirito/.config/dwmblocks/blocks.h > blocks.h
	make
}

package() 
{
  	cd "$srcdir/$gitname"
  	make PREFIX=/usr DESTDIR="${pkgdir}" install
}
