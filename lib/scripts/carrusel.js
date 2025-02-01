const fila = document.querySelector('.contenedor-carrusel');
const  artistas = document.querySelectorAll('.artista');

const flechaIzquierda = document.getElementById('flecha-izquierda');
const flechaDerecha = document.getElementById('flecha-derecha');

// ? ----- ----- Event Listener para la flecha derecha. ----- -----
flechaDerecha.addEventListener('click', () => {
	fila.scrollLeft += fila.offsetWidth;

	const indicadorActivo = document.querySelector('.indicadores .activo');
	if(indicadorActivo.nextSibling){
		indicadorActivo.nextSibling.classList.add('activo');
		indicadorActivo.classList.remove('activo');
	}
});

// ? ----- ----- Event Listener para la flecha izquierda. ----- -----
flechaIzquierda.addEventListener('click', () => {
	fila.scrollLeft -= fila.offsetWidth;

	const indicadorActivo = document.querySelector('.indicadores .activo');
	if(indicadorActivo.previousSibling){
		indicadorActivo.previousSibling.classList.add('activo');
		indicadorActivo.classList.remove('activo');
	}
});
// paginacion

const numPaginas = Math.ceil(artistas.length /5);
for (let i = 0; i < numPaginas; i++ ){
    const indicador = document.createElement('button');
    if( i === 0){
        indicador.classList.add('activo');
        }
    document.querySelector('.indicadores').appendChild(indicador);
    indicador.addEventListener('click', (e) => {
        fila.scrollLeft = i * fila.offsetWidth;
        document.querySelector('.indicadores .activo').classList.remove('activo');
        e.target.classList.add('activo');
    });
}


// ? hover

artistas.forEach((artista) => {
    artista.addEventListener('mouseenter', (e) => {
        const elemento = e.currentTarget;
        setTimeout(() =>{
            artistas.forEach(artista => artista.classList.remove('hover'));
            elemento.classList.add('hover');
        }, 50);
    })
})

fila.addEventListener('mouseleave', () =>{
    artistas.forEach(artista => artista.classList.remove('hover'));
})

