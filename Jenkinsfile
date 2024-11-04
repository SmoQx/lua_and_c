pipeline {

    agent any

    stage('Build') {
        steps {
            echo 'Building'
            sh 'make build'
        }
    }
    stage('Test') {
        echo 'Testing'
    }
}
