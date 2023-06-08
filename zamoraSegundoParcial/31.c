#include<stdio.h>
#include<stdio.h>
struct Atleta {
    char nombre[50];
    char deporte[50];
    char pais[50];
    int num_medallas; 
};
int main() {
    struct Atleta atl[3];
    printf("\tATLETAS\n");
    for(int i=0;i<3;i++){
        printf("ATLETA %d\n", i +1);
        printf("Nombre: ");
        fgets(atl[i].nombre, sizeof(atl[i].nombre), stdin);
        atl[i].nombre[strcspn(atl[i].nombre, "\n")]; 
        printf("Deporte: ");
        fgets(atl[i].deporte, sizeof(atl[i].deporte), stdin);
        atl[i].deporte[strcspn(atl[i].deporte, "\n")];
        printf("Pais: ");
        fgets(atl[i].pais, sizeof(atl[i].pais), stdin);
        atl[i].pais[strcspn(atl[i].pais, "\n")];
        printf("Medallas: ");
        scanf("%d", &atl[i].num_medallas);
        getchar(); 
    }
    int MasMedallas=0;
    for(int i=0;i<3;i++){
        if(atl[i].num_medallas > atl[MasMedallas].num_medallas){
            MasMedallas = i;
        }
    }
    printf("\n|| Atleta Mas Medallas ||\n");
    printf("Nombre: %s", atl[MasMedallas].nombre);
    printf("Deporte: %s", atl[MasMedallas].deporte);
    printf("País: %s", atl[MasMedallas].pais);
    printf("Número de Medallas obtenidas: %d\n", atl[MasMedallas].num_medallas);

    return 0;
}