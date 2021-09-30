# Maintainer: knaveightt <knaveightt@totalknavery.com>
pkgname=st-knaveightt
pkgver=0.8.4
pkgrel=2
pkgdesc="Knaveightt's build of st from suckless.org"
arch=(x86_64)
url="git://git.suckless.org/st"
license=('MIT')
depends=()
makedepends=(git make)
optdepends=()
provides=(st)
source=("git+$url" "st-knaveightt-20210929-shorthash.diff")
md5sums=(SKIP)

prepare() {
	cd st
	#patch -p1 -i "$srcdir/$pkgname-$pkgver.patch"
	git am "$srcdir/st-knaveightt-20210929-shorthash.diff"
}

#build() {
#	cd "$pkgname-$pkgver"
#	./configure --prefix=/usr
#	make
#}

#check() {
#	cd "$pkgname-$pkgver"
#	make -k check
#}

package() {
	cd st 
	make DESTDIR="$pkgdir/" install
}

md5sums=('SKIP'
         '5b53b219e8c988a60c4e6dcbe8e6106d')
